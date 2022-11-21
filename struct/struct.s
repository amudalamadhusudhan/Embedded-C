	.file	"struct.c"
	.text
	.comm	s1,32,32
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -48(%rbp)
	movabsq	$3761970466851729969, %rax
	movq	%rax, -44(%rbp)
	movw	$14134, -36(%rbp)
	movb	$99, -34(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -32(%rbp)
	movq	$10, -24(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	st
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"%d,%s,%c,%f,%d"
	.text
	.globl	st
	.type	st, @function
st:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rcx
	movq	-8(%rbp), %rax
	movss	16(%rax), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movq	-8(%rbp), %rax
	movzbl	14(%rax), %eax
	movsbl	%al, %edx
	movq	-8(%rbp), %rax
	leaq	4(%rax), %rsi
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movq	%rcx, %r8
	movl	%edx, %ecx
	movq	%rsi, %rdx
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	st, .-st
	.section	.rodata
	.align 4
.LC0:
	.long	1141566669
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
