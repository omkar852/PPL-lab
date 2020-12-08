//Program demonstrating array of (integers,characters) and pointers and debugging using gdb
#include<stdio.h>
int main(){
	int a[3]={1,3,4};
	int b=10;
	int *p=&b;
	return 0;
}
/*
Dump of assembler code for function main:
   0x0000000000001149 <+0>:	endbr64 
   0x000000000000114d <+4>:	push   %rbp
   0x000000000000114e <+5>:	mov    %rsp,%rbp
   0x0000000000001151 <+8>:	sub    $0x30,%rsp
   0x0000000000001155 <+12>:	mov    %fs:0x28,%rax
   0x000000000000115e <+21>:	mov    %rax,-0x8(%rbp)
   0x0000000000001162 <+25>:	xor    %eax,%eax
   0x0000000000001164 <+27>:	movl   $0x1,-0x14(%rbp)
   0x000000000000116b <+34>:	movl   $0x3,-0x10(%rbp)
   0x0000000000001172 <+41>:	movl   $0x4,-0xc(%rbp)
   0x0000000000001179 <+48>:	movl   $0xa,-0x24(%rbp)
   0x0000000000001180 <+55>:	lea    -0x24(%rbp),%rax
   0x0000000000001184 <+59>:	mov    %rax,-0x20(%rbp)
   0x0000000000001188 <+63>:	mov    $0x0,%eax
   0x000000000000118d <+68>:	mov    -0x8(%rbp),%rdx
   0x0000000000001191 <+72>:	xor    %fs:0x28,%rdx
   0x000000000000119a <+81>:	je     0x11a1 <main+88>
   0x000000000000119c <+83>:	callq  0x1050 <__stack_chk_fail@plt>
   0x00000000000011a1 <+88>:	leaveq 
   0x00000000000011a2 <+89>:	retq   

*/
