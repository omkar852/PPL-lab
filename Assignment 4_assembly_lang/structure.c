#include<stdio.h>
int main(){
	struct data{
		int a,b;
		char d;
	}d1,d2;
	d1.a=5;
	d1.b=7;
	d2.a=9;
	d2.b=10;
	d1.d='A';
	d2.d='b';
	return 0;
}
/*
 }
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000001129 <+0>:	endbr64 
   0x000000000000112d <+4>:	push   %rbp
   0x000000000000112e <+5>:	mov    %rsp,%rbp
   0x0000000000001131 <+8>:	movl   $0x5,-0x18(%rbp)
   0x0000000000001138 <+15>:	movl   $0x7,-0x14(%rbp)
   0x000000000000113f <+22>:	movl   $0x9,-0xc(%rbp)
   0x0000000000001146 <+29>:	movl   $0xa,-0x8(%rbp)
   0x000000000000114d <+36>:	movb   $0x41,-0x10(%rbp)
   0x0000000000001151 <+40>:	movb   $0x62,-0x4(%rbp)
   0x0000000000001155 <+44>:	mov    $0x0,%eax
   0x000000000000115a <+49>:	pop    %rbp
   0x000000000000115b <+50>:	retq   
End of assembler dump.
*/
