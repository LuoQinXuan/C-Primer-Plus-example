# makefile

OBJS = workermi.o
CC = g++
TEST = workmi.cpp
CFLAGS = -c -Wall -g

test:$(OBJS)
	$(CC) $(TEST) $^ -o test
%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
