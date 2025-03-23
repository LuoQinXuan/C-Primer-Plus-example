# makefile

OBJS = vect.o
CC = g++
TEST = randwalk.cpp
CFLAGS = -std=C++11 -c -Wall -g

test:$(OBJS)
	$(CC) $(TEST) $^ -o test
%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
