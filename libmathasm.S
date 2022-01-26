.intel_syntax noprefix
.global fac
.global sum
.global power
.global absolute

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
	dec eax
	mul rdi
	shr rax
	.endsum:
	ret

// unsigned long power(int n, int k)
power:
	ret

// unsigned long absolute(long n)
absolute:
	mov rax, rdi
	mov rdi, 0x7FFFFFFFFFFFFFFF
	and rax, rdi
	ret