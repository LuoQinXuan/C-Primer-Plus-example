# makefile

OBJS = test 
CC = g++
TEST = wrapped.cpp
CFLAGS = -c -Wall -g
LIB = somedefs.h

(OBJS): $(TEST)
	$(CC) $(TEST) $(LIB) -o $(OBJS)
#%.o:%.c
#	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
