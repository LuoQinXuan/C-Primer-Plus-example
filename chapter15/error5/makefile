# makefile

OBJS = test 
CC = g++
TEST  = error5.cpp
CFLAGS = -c -Wall -g
LIB = exc_mean.h

(OBJS): $(TEST)
	$(CC) $(TEST) $(LIB) -o $(OBJS)
#%.o:%.c
#	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
