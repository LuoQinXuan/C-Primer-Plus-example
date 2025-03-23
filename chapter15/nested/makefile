# makefile

OBJS = test 
CC = g++
TEST = nested.cpp
CFLAGS = -c -Wall -g
LIB = queuetp.h

(OBJS): $(TEST)
	$(CC) $(TEST) $(LIB) -o $(OBJS)
#%.o:%.c
#	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
