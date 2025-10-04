CC = clang
CFLAGS = -Wall -Wextra -g -std=c99 -Wpedantic -Isrc -Isrc/game_config
LDFLAGS =


# SDL2 flags (using pkg-config to get the correct flags)
SDL2_CFLAGS = $(shell pkg-config --cflags sdl2)
SDL2_LIBS = $(shell pkg-config --libs sdl2)


CFLAGS += $(SDL2_CFLAGS)
LDFLAGS += $(SDL2_LIBS)


SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin


# Target executable name
TARGET = $(BIN_DIR)/snake

# Source files (find all .c files in src directory)
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files (place them in obj directory)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Header files for dependency tracking
DEPS = $(wildcard $(SRC_DIR)/*.h) $(wildcard $(SRC_DIR)/game_config/*.h)

# Default target - creates directories and builds the executable
all: directories $(TARGET)

# Create necessary directories
directories:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(BIN_DIR)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)
	@echo "==============================================="
	@echo "Build complete: $(TARGET)"
	@echo "Run with: make run"
	@echo "==============================================="

# Compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $<"

# Clean up build files
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "Clean complete"

# Run the game
run: all
	./$(TARGET)

# Debug with gdb
debug: all
	gdb ./$(TARGET)

# Debug with valgrind (memory leak detection)
valgrind: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

# Rebuild everything from scratch
rebuild: clean all

# Help message
help:
	@echo "Available targets:"
	@echo "  make        - Build the snake game"
	@echo "  make run    - Build and run the game"
	@echo "  make clean  - Remove all build files"
	@echo "  make debug  - Run with gdb debugger"
	@echo "  make valgrind - Check for memory leaks"
	@echo "  make rebuild - Clean and rebuild everything"
	@echo "  make help   - Show this help message"

# Phony targets (these aren't actual files)
.PHONY: all clean run debug valgrind rebuild directories help
