# flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

# Directories
SRC_DIR = src
BIN_DIR = bin

# Find all .cpp files in the src directory
INC_DIR = include
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
HEADERS = $(wildcard $(INC_DIR)/*.h)
OUT = $(BIN_DIR)/BowlingGame

# target
all: $(OUT)

# Link all source files and create binary
$(OUT): $(SRCS) $(IHEADERSNC)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(OUT)

# Clean build output
clean:
	rm -rf $(BIN_DIR)
