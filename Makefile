CC ?= cc
CFLAGS ?= -g -Wall -Wextra -Wpedantic -O2

.PHONY: all clean

all: libmathasm.so 

clean:
	rm -f libmathasm.so
	$(MAKE) -C tests/ clean

libmathasm.so: libmathasm.S 
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $<

check: all
	$(MAKE) -C tests/
	