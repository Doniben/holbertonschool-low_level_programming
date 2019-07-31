        .globl main
main:
	        pushl   $.LC0
	        call    printf
	        addl    $4, %esp
	        xorl    %eax, %eax
	        ret
	.LC0:
	        .string "Hello, Holberton"
