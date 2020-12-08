#include<stdio.h>
int factorial(int n){
	if(n==0)
		return 1;
	else
		return n * factorial(n-1);
}
int main(){
	int c=3;
	int d=factorial(c);
	return 0;
}
/*
 (gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000001158 <+0>:	endbr64
   0x000000000000115c <+4>:	push   %rbp
   0x000000000000115d <+5>:	mov    %rsp,%rbp
   0x0000000000001160 <+8>:	sub    $0x10,%rsp                     //Stack frame of 16 bytes is generated.
   0x0000000000001164 <+12>:	movl   $0x3,-0x8(%rbp)
   0x000000000000116b <+19>:	mov    -0x8(%rbp),%eax
   0x000000000000116e <+22>:	mov    %eax,%edi
   0x0000000000001170 <+24>:	callq  0x1129 <factorial>
   0x0000000000001175 <+29>:	mov    %eax,-0x4(%rbp)
   0x0000000000001178 <+32>:	mov    $0x0,%eax
   0x000000000000117d <+37>:	leaveq
   0x000000000000117e <+38>:	retq
End of assembler dump.
(gdb) disassemble factorial
Dump of assembler code for function factorial:
   0x0000000000001129 <+0>:	endbr64
   0x000000000000112d <+4>:	push   %rbp
   0x000000000000112e <+5>:	mov    %rsp,%rbp
   0x0000000000001131 <+8>:	sub    $0x10,%rsp       //again stack frame of 16 bytes is generated for factorial function.
   0x0000000000001135 <+12>:	mov    %edi,-0x4(%rbp)
   0x0000000000001138 <+15>:	cmpl   $0x0,-0x4(%rbp)
   0x000000000000113c <+19>:	jne    0x1145 <factorial+28>
   0x000000000000113e <+21>:	mov    $0x1,%eax
   0x0000000000001143 <+26>:	jmp    0x1156 <factorial+45>
   0x0000000000001145 <+28>:	mov    -0x4(%rbp),%eax
   0x0000000000001148 <+31>:	sub    $0x1,%eax
   0x000000000000114b <+34>:	mov    %eax,%edi
   0x000000000000114d <+36>:	callq  0x1129 <factorial>
   0x0000000000001152 <+41>:	imul   -0x4(%rbp),%eax
   0x0000000000001156 <+45>:	leaveq
   0x0000000000001157 <+46>:	retq
End of assembler dump.
*/
