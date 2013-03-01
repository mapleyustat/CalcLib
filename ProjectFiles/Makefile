#
# Makefile for CalcLib
#

CODE = ../Code
BUILD = ../Build

CPP = gcc
CPPFLAGS = -I $(CODE)/

LIB = $(BUILD)/CalcLib.a

SRCS = \
	$(wildcard $(CODE)/**/*.cpp) \
	$(wildcard $(CODE)/AlgebraLibraries/**/*.cpp) \
	$(wildcard $(CODE)/Calculator/Environments/**/*.cpp)

BARE_SRCS = $(notdir $(SRCS))
BARE_OBJS = $(BARE_SRCS:.cpp=.o)
OBJS = $(addprefix $(BUILD)/, $(BARE_OBJS))

include Makefile.dep

all: $(LIB)

$(LIB): build_dir $(OBJS)
	ar -cru $(LIB) $(OBJS)
	
# This won't work...
#%.o: %.cpp
#	$(CPP) $(CPPFLAGS) -c $< -o $@

# Can I upgrade C++ so that i can use the 'override' keyword?


build_dir:
	cd ..; mkdir -p Build
	
dep:
	makedepend $(CPPFLAGS) $(SRCS) -f Makefile.dep



