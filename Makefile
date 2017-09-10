CC		 := clang++
LD		 := clang++

CFLAGS 		 := -g
LDFLAGS		 :=

###########################################################

.SUFFIXES:

.PHONY : clean mkdirs

RUNTIME_SOURCES := source/runtime/*.cpp
RUNTIME_HEADERS := source/runtime/*.h

BOOTSTRAP_SOURCES := source/cogc-bootstrap/*.cpp
BOOTSTRAP_HEADERS := source/cogc-bootstrap/*.cpp

COGC_SOURCES := source/cogc/*.cog

INCDIRS := source/ .

ARCH=$(shell uname | sed -e 's/-.*//g')

CFLAGS += $(addprefix -I, $(INCDIRS))
CFLAGS += -std=c++11
CFLAGS += $(CFLAGS_PLATFORM)

# TODO: don't trigger this
CFLAGS += -Wno-writable-strings

OUTPUTDIR        :=  bin/

LIBS :=
LIBS := $(addprefix -l, $(LIBS))

LDFLAGS := $(LIBS)

ifeq ($(ARCH), Darwin)
LDFLAGS += -framework CoreFoundation
LDFLAGS += -framework CoreServices
endif

all: mkdirs $(OUTPUTDIR)/cogc $(OUTPUTDIR)/cog-test

# run cogc to generate the source for cogc
source/cogc/cogc.cog.cpp: source/cogc/*.cog source/cog/cog.cog
	cd source/cogc/
	$(COGC) -m cogc *.cog

# use the host compiler to compile cogc
$(OUTPUTDIR)/cogc: source/cogc/*.cpp
	$(CC) $(LDFLAGS) -o $@ $(CFLAGS) source/cogc/main.cpp $(RUNTIME_SOURCES)

# test-runner program
$(OUTPUTDIR)/cog-test: source/test/*.cpp $(RUNTIME_SOURCES) $(RUNTIME_HEADERS)
	$(CC) $(LDFLAGS) -o $@ $(CFLAGS) source/test/*.cpp $(RUNTIME_SOURCES)


mkdirs:
	@if test ! -d $(OUTPUTDIR); then mkdir $(OUTPUTDIR); fi
	@if test ! -d $(GENDIR); then mkdir $(GENDIR); fi

clean:
	rm -rf $(OUTPUTDIR)/cogc
	rm -rf $(OUTPUTDIR)/cog-test

