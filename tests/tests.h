#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <unistd.h>

#include "../libmathasm.h"

#define NUM_TESTS 5

void test_sum(void);
void test_abs(void);
void test_fib(void);
void test_pow(void);
void test_fac(void);

#endif /* tests.h */