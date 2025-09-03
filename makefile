# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall

# Directories
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

# Find all source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
# Create object file names by replacing src/ with obj/ and .cpp with .o
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Executable name
TARGET = $(BINDIR)/minigit

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files into object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Phony targets
.PHONY: all clean
