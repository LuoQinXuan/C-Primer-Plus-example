# makefile

OBJS = placenew2.o
CC = g++
CFLAGS = -c -Wall -g

test:$(OBJS)
	$(CC) $^ -o test
%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
