CC := g++

SRCDIR := src 					
BUILDDIR := build				
TARGET := bin/RocketFabric

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
INC := -I include


