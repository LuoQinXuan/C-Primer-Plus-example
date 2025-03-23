# makefile

OBJS = stonewt1.o
CC = g++
TEST = stone1.cpp
CFLAGS = -c -Wall -g

test:$(OBJS)
	$(CC) $(TEST) $^ -o test
%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
