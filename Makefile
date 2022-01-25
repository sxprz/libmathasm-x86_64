CC ?= cc
CFLAGS ?= -g -Wall -Wextra -Wpedantic -O2
TARGETS ?= libmathasm.h

.PHONY: all clean

all: libmathasm.so

clean:
	rm -f libmathasm.so

libmathasm.so: libmathasm.S
	$(CC) $(CFLAGS) -shared -fPIC $(TARGETS) -o $@ $^

#check: all
#	$(MAKE) -C tests check