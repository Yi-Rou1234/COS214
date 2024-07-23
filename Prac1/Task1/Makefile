CC = g++
CFLAGS = -std=c++11 -Wall
INCLUDES = -I.

# List of source files
SRCS = main.cpp cargoMemento.cpp cargoShip.cpp ship.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = my_program

# Targets
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
