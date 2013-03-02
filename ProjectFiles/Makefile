# Makefile for CalcLib

CODE = ../Code
BUILD = ../Build

CPP = gcc
FLAGS = -I $(CODE)/ -D__LINUX__

LIB = $(BUILD)/CalcLib.a

SRCS = \
	$(wildcard $(CODE)/**/*.cpp) \
	$(wildcard $(CODE)/AlgebraLibraries/**/*.cpp) \
	$(wildcard $(CODE)/Calculator/Environments/**/*.cpp)

OBJS = $(patsubst %.cpp, $(BUILD)/%.o, $(notdir $(SRCS)))

all: $(LIB)

$(LIB): $(OBJS)
	ar -cru $(LIB) $(OBJS)

define BUILD_OBJ_RULE =
$(1): $(2)
	$$(CPP) $$(FLAGS) -c $$< -o $$@
endef

$(foreach src, $(SRCS), $(eval $(call BUILD_OBJ_RULE, $(patsubst %.cpp, $(BUILD)/%.o, $(notdir $(src))), $(src))))

again:
	make clean
	make

clean:
	rm -f $(OBJS)
	rm -f $(LIB)

# In Linux, folders are files, so shouldn't I be able to fold this into the dep-graph?
.PHONY: build_dir
build_dir:
	cd ..; mkdir -p Build

# I can't really make use of this, because the makedepend doesn't know where I want the object files.
# So, if a header is touched, we have to rebuild all.  :(
#dep:
#	@makedepend $(FLAGS) $(SRCS) -p $(BUILD) -f Makefile.dep
#	rm -f Makefile.dep.bak
#
#include Makefile.dep

# Makefile for CalcLib
