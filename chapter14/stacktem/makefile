# makefile

OBJS = test 
CC = g++
TEST = tempparm.cpp
CFLAGS = -c -Wall -g
LIB = stacktp.h

(OBJS): $(TEST)
	$(CC) $(TEST) $(LIB) -o $(OBJS)
#%.o:%.c
#	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
