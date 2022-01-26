#include "tests.h"

int main(void) {
	
	unsigned long res_sum = sum(5);
	unsigned long expected_sum = 10;
				  
	if(res_sum != expected_sum) {
		fprintf(stderr, "Expected: %lu, Actual: %lu\n", expected_sum, res_sum);
		return 1;
	}
	
	long expected_abs = 128;
	unsigned long res_abs = absolute(-expected_abs);
	
	if(res_abs != (long unsigned)expected_abs) {
		fprintf(stderr, "Expected: %lu, Actual: %lu", (unsigned long)expected_abs, res_abs);
		return 1;
	}
	
	return 0;
}
