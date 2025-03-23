# makefile

OBJS = test 
CC = g++
TEST = stkoptr1.cpp
CFLAGS = -c -Wall -g
LIB = stcktp1.h

(OBJS): $(TEST)
	$(CC) $(TEST) $(LIB) -o $(OBJS)
#%.o:%.c
#	$(CC) $^ $(CFLAGS) -o $@

clean:
	$(RM) *.o test -r
