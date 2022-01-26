.intel_syntax noprefix
.global fac
.global sum
.global power
.global absolute
.global fib
.global collatz
.global gcd
.global lcm

.section .text

// unsigned long fac(int n)
fac:
	ret

// unsigned long sum(int n)
sum:
	test eax, eax
	jz .endsum
	cmp eax, 1
	jz .endsum

	mov rax, 0xFFFFFFFF
	and rdi, rax
	xor rax, rax
	mov eax, edi
	inc eax
	mul rdi
	shr rax
	.endsum:
	ret

// unsigned long power(int n, unsigned int k)
power:
	ret

// unsigned long absolute(long n)
absolute:
	mov rax, rdi
	mov rdi, 0x7FFFFFFFFFFFFFFF
	and rax, rdi
	ret

// unsigned long fib(unsigned long n)
fib:
	ret
	
// unsigned long collatz(unsigned long n)
collatz:
	ret
	
// unsigned long gcd(unsigned long n, unsigned long m)
gcd:
	ret

// unsigned long lcm(unsigned long n, unsigned long m)
lcm:
	ret
