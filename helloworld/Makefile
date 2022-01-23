
CC = g++
CFLAGS = -Wall -O3 -std=c++17

TARGET = helloworld

OBJS = $(TARGET).o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: clean
clean:
	rm *.o $(TARGET)


