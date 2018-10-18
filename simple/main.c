#include <stdio.h>

extern void fun1();
extern void fun2();

int main(int argc, char **argv)
{
	printf("hello world\n");
	fun1();
	fun2();

	return 0;
}

