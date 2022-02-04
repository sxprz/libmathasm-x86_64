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
	test esi, esi
	jz .endpowone
	
	push rsi
	shr esi, 1
	call power
	pop rsi
	
	mov ecx, esi
	and ecx, 1
	jz .endpowsq
	
	mul rax
	
	cmp esi, 0
	jg .powtimesbase
	div rdi
	ret
	
	.powtimesbase:
	mul rdi
	ret
	
	.endpowsq:
	mul rax
	ret
	
	.endpowone:
	mov rax, 1
	ret

// unsigned long absolute(long n)
absolute:
	xor rax, rax
	or rax, rdi
	jns .endabs
	neg rax
	
	.endabs:
	ret

// unsigned long fib(unsigned long n)
fib:
	test rdi, rdi
	jz .trivfib
	cmp rdi, 1
	jz .trivfib

	push rcx
	dec rdi
	mov rcx, rdi
	xor rdi, rdi
	mov rax, 1
	
	.loopfib:
	test rcx, rcx
	jz .endloopfib
	xadd rax, rdi
	dec rcx
	jmp .loopfib
	
	.endloopfib:
	pop rcx
	jmp .endfib
	
	.trivfib:
	mov rax, rdi
	
	.endfib:
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
