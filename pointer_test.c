#include <stdio.h>


void test1()
{
	int ia;
	int *pi;
	char *pc;

	printf("&ia=%p\n", &ia);
	printf("&pi=%p\n", &pi);
	printf("&pc=%p\n", &pc);

    ia = 0x12345678;
	pi = &ia;
	pc = (char *)(&ia);
	printf("ia=0x%x\n", ia);
	printf("pi=%p\n", pi);
	printf("pc=%p\n", pc);

	printf("*pi=0x%x\n", *pi);
	printf("pc=%p\n", pc); printf("*pc=0x%x", *pc); pc = pc + 1;
	printf("pc=%p\n", pc); printf("*pc=0x%x", *pc); pc = pc + 1;
	printf("pc=%p\n", pc); printf("*pc=0x%x", *pc); pc = pc + 1;
	printf("pc=%p\n", pc); printf("*pc=0x%x", *pc); pc = pc + 1;

	
}


int main(int argc,char * argv[])
{
	int a;
	char c;
	int *pi;
	char *pc;

	printf("sizeof(char)=%d\n",sizeof(char));
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeod(int *)=%d\n",sizeof(int *));
	printf("sizeof(char *)=%d\n",sizeof(char *));
	test1();

	
	return 0;
}
