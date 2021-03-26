#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	scanf("%x",&a);
	for (int i = 1; i < 16; i++)
	{
		printf("%X\*%X\=%X\n", a, i, a * i);
	}
}
