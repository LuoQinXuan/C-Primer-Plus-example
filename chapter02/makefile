TARGET = test
SRCS = myfirst3.cpp 
OBJS = $(SRCS:.cpp=.o)
CC=g++
CFLAGS = -Wall -std=C++99 -prhread -w
LDLIBS = -L ./usrLib -lm
$(TARGET) : $(OBJS)
	$(CC) -o $@ $^ $(LDLIBS)
clean:
	rm -rf $(TARGET) $(OBJS)
