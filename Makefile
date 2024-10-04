
CXX = g++


CXXFLAGS = -Wall -std=c++11


SOURCES = main.cpp pacman.cpp ghost.cpp painter.cpp point.cpp game_object.cpp map.cpp engine.cpp
OBJECTS = $(SOURCES:.cpp=.o)


TARGET = pacman


all: $(TARGET)


$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECTS) $(TARGET)
