CXX = g++
CXXFLAGS = -Wall
SRC_DIR = src
BIN_DIR = bin
CORE_DIR = core
STATES_DIR = states
UI_DIR = ui
TARGET = $(BIN_DIR)/main

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/$(CORE_DIR)/*.cpp $(SRC_DIR)/$(STATES_DIR)/*.cpp $(SRC_DIR)/$(UI_DIR)/*.cpp

LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p $(BIN_DIR)
	$(CXX) $(SRC) -o $(TARGET) $(CXXFLAGS) $(LIBS)

run: all
	./$(TARGET)

clean:
	rm -rf $(BIN_DIR)