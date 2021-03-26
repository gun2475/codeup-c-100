#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, c;
	int b[24] = { 0 };
	scanf("%d", &a);
	for (int j = 1; j <= a; j++)
	{
		scanf("%d", &c);
		b[c] = b[c] + 1;
	}
	for (int i = 1; i < 24; i++)
	{
		printf("%d ", b[i]);
	}
}
