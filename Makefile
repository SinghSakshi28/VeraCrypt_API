# Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Directories
SRCDIR = /home/daksh/LibAPIproject
OBJDIR = obj
LIBDIR = lib

# Source files
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

# Library
LIBRARY = libVeraCryptFacade.a

.PHONY: all clean

all: $(LIBDIR)/$(LIBRARY)

$(LIBDIR)/$(LIBRARY): $(OBJS) | $(LIBDIR)
	ar rcs $@ $^

$(OBJS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(LIBDIR):
	mkdir -p $(LIBDIR)

clean:
	rm -rf $(OBJDIR) $(LIBDIR)

