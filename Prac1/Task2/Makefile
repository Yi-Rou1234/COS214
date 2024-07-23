CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = main

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run:
	./main

# CC = g++
# CFLAGS = -std=c++11 -Wall
# INCLUDES = -I.

# # List of source files
# SRCS = main.cpp Client.cpp Consumer.cpp ConsumerCreator.cpp ODataConsumer.cpp JsonConsumer.cpp

# # Object files
# OBJS = $(SRCS:.cpp=.o)

# # Executable name
# EXEC = my_program

# # Targets
# all: $(EXEC)

# $(EXEC): $(OBJS)
# 	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(EXEC)

# %.o: %.cpp
# 	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# clean:
# 	rm -f $(OBJS) $(EXEC)
