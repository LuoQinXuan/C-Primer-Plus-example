# makefile

OBJS = test 
CC = g++
TEST = twod.cpp
CFLAGS = -c -Wall -g
LIB = arraytp.h

(OBJS): $(TEST)
	$(CC) $(TEST) $(LIB) -o $(OBJS)
#%.o:%.c
#	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
