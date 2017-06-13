CC=g++
CFLAGS=-Wall -g -Werror -c
CPP14=--std=c++14
INC= ../inc/
SOURCES=*.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(OBJECTS) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(CPP14) -o $@

.cpp.o: *.h 
	$(CC) -I$(INC) $(CFLAGS) $(CPP14) $(SOURCES)

clean: 
	-rm -f ${EXECUTABLE} ${OBJECTS} *.d

.PHONY: all clean
