	.file	"2-strncpy.c"
	.text
	.globl	_strncpy
	.type	_strncpy, @function
_strncpy:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	$0, -24(%rbp)
	movl	$0, -20(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L2
.L3:
	addl	$1, -24(%rbp)
	addq	$1, -48(%rbp)
.L2:
	movq	-48(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	addl	$1, -24(%rbp)
	movl	-52(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L4
	movl	-24(%rbp), %eax
	movl	%eax, -52(%rbp)
.L4:
	movq	-8(%rbp), %rax
	movq	%rax, -48(%rbp)
	jmp	.L5
.L6:
	movq	-48(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, -48(%rbp)
	movq	-40(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -40(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	addl	$1, -20(%rbp)
.L5:
	movl	-20(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L6
	movq	-16(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_strncpy, .-_strncpy
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
