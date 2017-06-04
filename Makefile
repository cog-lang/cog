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

all: mkdirs $(OUTPUTDIR)/cogc

# bootstrapping step 0: a pure C++ compiler
$(OUTPUTDIR)/cogc-bootstrap0: $(BOOTSTRAP_SOURCES) $(BOOTSTRAP_HEADERS)
	$(CC) $(LDFLAGS) -o $@ $(CFLAGS) $(BOOTSTRAP_SOURCES)

# bootstrapping step 1: use the C++ compiler to compile the "real" compiler written in Cog
$(OUTPUTDIR)/cogc-bootstrap: $(COGC_SOURCES) $(OUTPUTDIR)/cogc-bootstrap0
	$(OUTPUTDIR)/cogc-bootstrap0 -m cogc_bootstrap $(COGC_SOURCES)
	$(CC) $(LDFLAGS) -o $@ $(CFLAGS) -DCOGC_BOOTSTRAP source/cogc/main.cpp $(RUNTIME_SOURCES)

# bootstrapping step 2: use the Cog-based compiler to compile itself
$(OUTPUTDIR)/cogc: $(COGC_SOURCES) $(OUTPUTDIR)/cogc-bootstrap
	$(OUTPUTDIR)/cogc-bootstrap -m cogc $(COGC_SOURCES)
	$(CC) $(LDFLAGS) -o $@ $(CFLAGS) source/cogc/main.cpp $(RUNTIME_SOURCES)


%.cog.cpp %.cog.h: $(OUTPUTDIR)/cogc

%.cog.cpp %.cog.h: %.cog
	$(OUTPUTDIR)/cogc $<


mkdirs:
	@if test ! -d $(OUTPUTDIR); then mkdir $(OUTPUTDIR); fi
	@if test ! -d $(GENDIR); then mkdir $(GENDIR); fi

clean:
	rm -rf $(OUTPUTDIR)/$(TARGET)
	rm -rf $(OUTPUTDIR)/test
	rm -rf $(OUTPUTDIR)/libtheta.a

