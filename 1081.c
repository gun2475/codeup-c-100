#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			printf("%d %d\n", i, j);
		}
	}
}
