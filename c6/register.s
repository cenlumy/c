	.file	"register.c"
	.section	.rodata
.LC0:
	.string	"register is god%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$16, %esp
	movl	$0, %ebx
	.cfi_offset 3, -12
	jmp	.L2
.L3:
	movl	$.LC0, %eax
	movl	%ebx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, %ebx
.L2:
	cmpl	$4, %ebx
	jle	.L3
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	.cfi_restore 3
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
