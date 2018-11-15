#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int addfunc(int a, int b)
{
	return a+b;
}
int subfunc(int a, int b)
{
	return a-b;
}
int mulfunc(int a, int b)
{
	return a*b;
}
int divfunc(int a, int b)
{
	return a/b;
}
int main(int argc, char *argv[]) {
	
	int num1, num2;
	char op;
	int (*calcfunc)(int, int);
	
	printf("input calculation : ");
	scanf("%d %c %d", &num1, &op, &num2);
	switch(op)
	{
		case '+':
		calcfunc = addfunc;
		break;
		
		case '-':
		calcfunc = subfunc;
		break;
		
		case '*':
		calcfunc = mulfunc;
		break;
		
		case '/':
		calcfunc = divfunc;
		break;
	}
	
	printf("output : %i\n", calcfunc(num1, num2));
	
	return 0;
}
