#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <unistd.h>

#include "../libmathasm.h"

#define NUM_TESTS 6

void test_sum(void);
void test_abs(void);
void test_fib(void);
void test_pow(void);
void test_fac(void);
void test_collatz(void);

#endif /* tests.h */