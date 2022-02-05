#include "tests.h"

int test_passed_counter = 0;

int main(void) {
	test_sum();
	test_abs();
	test_fib();
	test_pow();
	test_fac();
	test_collatz();
	
	fprintf(stderr, "Tester >> %d out of %d functions (%.0f%%) have passed the unit tests.\n", test_passed_counter, NUM_TESTS, (100*test_passed_counter/(float)NUM_TESTS));
	return (test_passed_counter != NUM_TESTS);
}

void test_sum(void) {
	unsigned long in_sum = 5;
	unsigned long res_sum = sum(in_sum);
	unsigned long expected_sum = 15;
	if(res_sum != expected_sum) {
		fprintf(stderr, "libmathasm >> sum(%lu) | Expected: %lu, Actual: %lu\n", in_sum, expected_sum, res_sum);
	}
	
	++test_passed_counter;
}

void test_abs(void) {
	long expected_abs = 128;
	long in_abs = -expected_abs;
	unsigned long res_abs = absolute(in_abs);
	if(res_abs != (long unsigned)expected_abs) {
		fprintf(stderr, "libmathasm >> abs(%ld) | Expected: %lu, Actual: %lu\n", in_abs, (unsigned long)expected_abs, res_abs);
		return;
	}
	
	++test_passed_counter;
}

void test_fib(void) {
	unsigned long expected_fib = 5;
	unsigned long in_fib = 5;
	unsigned long res_fib = fib(in_fib);
	if(res_fib != expected_fib) {
		fprintf(stderr, "libmathasm >> fib(%lu) | Expected: %lu, Actual: %lu\n", in_fib, expected_fib, res_fib);
		return;
	}
	
	++test_passed_counter;
}

void test_pow(void) {
	int in_pow1 = 64;
	unsigned int in_pow2 = 2;
	unsigned long res_pow = power(in_pow1, in_pow2);
	unsigned long expected_pow = 4096;
	if(res_pow != expected_pow) {
		fprintf(stderr, "libmathasm >> pow(%d,%u) | Expected: %lu, Actual: %lu\n", in_pow1, in_pow2, expected_pow, res_pow);
		return;
	}
	
	in_pow1 = 3;
	in_pow2 = 4;
	res_pow = power(in_pow1, in_pow2);
	expected_pow = 81;
	if(res_pow != expected_pow) {
		fprintf(stderr, "libmathasm >> pow(%d,%u) | Expected: %lu, Actual: %lu\n", in_pow1, in_pow2, expected_pow, res_pow);
		return;
	}
	
	++test_passed_counter;
}


void test_fac(void) {
	unsigned int in_fac = 5;
	unsigned long expected_fac = 120;
	unsigned long res_fac = fac(in_fac);
	if(res_fac != expected_fac) {
		fprintf(stderr, "libmathasm >> fac(%du) | Expected: %lu, Actual: %lu\n", in_fac, expected_fac, res_fac);
		return;
	}
	
	in_fac = 17;
	expected_fac = 355687428096000;
	res_fac = fac(in_fac);
	if(res_fac != expected_fac) {
		fprintf(stderr, "libmathasm >> fac(%du) | Expected: %lu, Actual: %lu\n", in_fac, expected_fac, res_fac);
		return;
	}
	
	++test_passed_counter;
}


void test_collatz(void) {
	unsigned long expected_collatz = 5;
	unsigned long in_collatz = 5;
	unsigned long res_collatz = collatz(in_collatz);
	if(res_collatz != expected_collatz) {
		fprintf(stderr, "libmathasm >> collatz(%lu) | Expected: %lu, Actual: %lu\n", in_collatz, expected_collatz, res_collatz);
		return;
	}
	
	++test_passed_counter;
}
