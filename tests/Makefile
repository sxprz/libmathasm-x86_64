# TODO: Change this Makefile to accommodate test files 
CC ?= cc
CFLAGS ?= -g -Wall -Wextra -Wpedantic -O2
TARGETS ?= tests.h libmathasm.so
LDFLAGS ?= -llibmathasm

.PHONY: all clean

all: tests.c

clean:
	rm -f tests

tests.c: tests.c
	$(CC) $(CFLAGS) -fPIC $(TARGETS) -o $@ $^ $(LDFLAGS)
