# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -I./src/include

# Source files
SRC = src/main.cpp src/logging.cpp src/equation.cpp src/tui.cpp

# Output directory
OBJDIR = build
TARGET = $(OBJDIR)/extreme_math

# Compile and link
$(TARGET): $(SRC)
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean
clean:
	rm -rf $(OBJDIR)
