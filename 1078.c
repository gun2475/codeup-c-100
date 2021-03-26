#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, sum=0;
	scanf("%d", &i);
	for (int j = 1; j <= i; j++)
	{
		if (j % 2 == 0)
			sum += j;
	}
	printf("%d", sum);
}
