# compiler
CC = g++

# compiler flags:
CFLAGS = -std=c++11 -g -Wall

#Linking Flag
LFLAGS = -Wall

INCLUDES = -I ./boost_1_87_0

LIBS = 
# the build target executable:
TARGET = test

$(TARGET) : lexcast.o
	$(CC) $(CFLAGS) -o $(TARGET) lexcast.o

lexcast.o : lexcast.cpp
	$(CC) $(INCLUDES) $(CFLAGS) -o lexcast.o -c lexcast.cpp

clean:
	$(RM) $(TARGET) lexcast.o 
# Thanks https://github.com/jayant42/Makefile/blob/master/Makefile
