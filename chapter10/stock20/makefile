# makefile

OBJS = stock20.o
CC = g++
TEST = usestok2.cpp
CFLAGS = -c -Wall -g

test:$(OBJS)
	$(CC) $(TEST) $^ -o test
%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
