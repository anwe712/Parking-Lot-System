CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

TARGET = parking_lot

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
