#ifndef LIBMATHASM_H
#define LIBMATHASM_H

// Calculate the factorial of n
extern unsigned long fac(unsigned int n);

// Calculate the sum of 1 to n
extern unsigned long sum(int n);

// Calculate n^k (k-th power of n)
extern unsigned long power(int n, unsigned int k);

// Calculate the absolute value of n
extern unsigned long absolute(long n);

// Calculate the n-th Fibonacci number
extern unsigned long fib(unsigned long n);

// Calculate the steps needed to reach 1 from n, Collatz Conjecture
extern unsigned long collatz(unsigned long n);

// Calculate the greatest common divisor of n & m
extern unsigned long gcd(unsigned long n, unsigned long m);

// Calculate the least common multiplier of n & m
extern unsigned long lcm(unsigned long n, unsigned long m);

#endif /* libmathasm.h */
