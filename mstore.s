	.file	"mstore.c"
	.text
	.globl	mulstore
	.def	mulstore;	.scl	2;	.type	32;	.endef
	.seh_proc	mulstore
mulstore:
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%r8, %rbx
	call	mult2
	movl	%eax, (%rbx)
	addq	$32, %rsp
	popq	%rbx
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	mult2;	.scl	2;	.type	32;	.endef
