# makefile

OBJS = studenti.o
CC = g++
TEST = use_stui.cpp
CFLAGS = -std=c++11 -c -Wall -g

test:$(OBJS)
	$(CC) $(TEST) $^ -o test
%.o:%.c
	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
