#include "tests.h"

int main(void) {
	
	unsigned long in_sum = 5;
	unsigned long res_sum = sum(in_sum);
	unsigned long expected_sum = 15;
	if(res_sum != expected_sum) {
		fprintf(stderr, "libmathasm >> sum(%lu) | Expected: %lu, Actual: %lu\n", in_sum, expected_sum, res_sum);
		return 1;
	}
	
	long expected_abs = 128;
	long in_abs = -expected_abs;
	unsigned long res_abs = absolute(in_abs);
	if(res_abs != (long unsigned)expected_abs) {
		fprintf(stderr, "libmathasm >> abs(%ld) | Expected: %lu, Actual: %lu\n", in_abs, (unsigned long)expected_abs, res_abs);
		return 1;
	}
	
	unsigned long expected_fib = 5;
	unsigned long in_fib = 5;
	unsigned long res_fib = fib(in_fib);
	if(res_fib != expected_fib) {
		fprintf(stderr, "libmathasm >> fib(%lu) | Expected: %lu, Actual: %lu\n", in_fib, expected_fib, res_fib);
		return 1;
	}
	
	int in_pow1 = 64;
	unsigned int in_pow2 = 2;
	unsigned long res_pow1 = power(in_pow1, in_pow2);
	unsigned long expected_pow1 = 4096;
	if(res_pow1 != expected_pow1) {
		fprintf(stderr, "libmathasm >> pow(%d,%u) | Expected: %lu, Actual: %lu\n", in_pow1, in_pow2, expected_pow1, res_pow1);
		return 1;
	}
	
	int in_pow3 = 3;
	unsigned int in_pow4 = 4;
	unsigned long res_pow2 = power(in_pow3, in_pow4);
	unsigned long expected_pow2 = 81;
	if(res_pow1 != expected_pow1) {
		fprintf(stderr, "libmathasm >> pow(%d,%u) | Expected: %lu, Actual: %lu\n", in_pow3, in_pow4, expected_pow2, res_pow2);
		return 1;
	}
	
	printf("libmathasm >> Tests passed!\n");
	return 0;
}
