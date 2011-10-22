OBJS =  
CC = gcc
CFLAGS = -O3 -Wall 
LDFLAGS =  

.PHONY: all
all: lfpsplitter

lfpsplitter: lfpsplitter.o $(OBJS)
	$(CC) -o $@ lfpsplitter.o $(OBJS) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJS) lfpsplitter.o lfpsplitter
