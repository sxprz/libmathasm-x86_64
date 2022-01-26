CC ?= cc
CFLAGS ?= -g -Wall -Wextra -Wpedantic -O2
LDFLAGS ?= -lmathasm
OBJECTS ?= tests.h

.PHONY: all clean

all: tests

clean:
	rm -f tests

tests: tests.c
	$(CC) $(CFLAGS) -L.. $(OBJECTS) -o $@ $< $(LDFLAGS)
	./tests
