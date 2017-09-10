// main.cpp

// A test-runner program for Cog.

#include "runtime/runtime.h"
#include "runtime/process.h"

#include <stdio.h>
#include <string.h>


//

String gExeutableDirectoryPath;

static String getExpectedOutput(
	char const* basePath)
{
	String path;
	path.append(basePath);
	path.append(".expected");

	FILE* file = fopen(path.asSpan().begin, "r");
	if(!file)
	{
		return TerminatedStringSpan(
			"result: 0\nstdout: {\n}\nstderr: {\n}\n");
	}

	enum { kBufferSize = 1024 };
	char buffer[kBufferSize];

	String result;
	while(!feof(file))
	{
		auto count = fread(buffer, 1, kBufferSize, file);
		result.append(
			StringSpan(
				buffer,
				buffer + count));
	}

	fclose(file);
	return result;
}

static int testCount = 0;
static int passedCount = 0;

static void doTest(
	char const* path)
{
	testCount++;

	// need to `exec` the compiler/evaluator on
	// the given file and capture the results

	String appPath = gExeutableDirectoryPath + "cogc";

	ProcessSpawner spawner(appPath.asSpan().begin);
	spawner.addArg("-eval");
	spawner.addArg(path);

	int result = spawner.spawnAndWait();

	char resultName[16];
	sprintf(resultName, "%d", result);

	String actualOutput;
	actualOutput.append("result: ");
	actualOutput.append(resultName);
	actualOutput.append("\nstdout: {\n");
	actualOutput.append(spawner.stdoutText);
	actualOutput.append("}\nstderr: {\n");
	actualOutput.append(spawner.stderrText);
	actualOutput.append("}\n");

	String expectedOutput = getExpectedOutput(path);

	if(actualOutput == expectedOutput)
	{
		fprintf(stderr, "passed: %s\n", path);

		passedCount++;
		return;
	}

	fprintf(stderr, "FAILED: %s\n", path);

	String actualOutputPath;
	actualOutputPath.append(path);
	actualOutputPath.append(".actual");

	FILE* file = fopen(actualOutputPath.asSpan().begin, "w");
	fprintf(file, "%s", actualOutput.asSpan().begin);
	fclose(file);
}

static bool endsWith(char const* text, char const* suffix)
{
	return TerminatedStringSpan(text).endsWith(
		TerminatedStringSpan(suffix));
}

static void maybeDoTest(
	char const* path)
{
	if(endsWith(path, ".cog"))
	{
		doTest(path);
	}
}

static void enumerateTestsInDirectory(
	char const* path)
{
	for(auto entry : getFilesInDirectory(path))
	{
		maybeDoTest(entry.getPath().asSpan().begin);
	}
}

int main(
	int argc,
	char** argv)
{
	gExeutableDirectoryPath = getExecutableDirectoryPath();

//	fprintf(stderr, "PATH: '%s'\n", gExeutableDirectoryPath.asSpan().begin);

	// enumerate files in test directory

	// for each test file, extract tests to run,
	// and then run them and compare to expected output

	enumerateTestsInDirectory("tests");

}
