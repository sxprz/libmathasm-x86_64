CC ?= cc
CFLAGS ?= -g -Wall -Wextra -Wpedantic -O2
#LDFLAGS ?= -lmathasm
LIBS ?= ../libmathasm.so
OBJECTS ?= tests.h

.PHONY: all clean

all: tests

clean:
	rm -f tests

tests: tests.c
	$(CC) $(CFLAGS) $(OBJECTS) -o $@ $< $(LIBS)
	./tests