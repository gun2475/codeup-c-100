#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i = 0, sum;
	int j = 0;
	scanf("%d", &sum);
	while (j < sum)
	{
		i++;
		j += i;
	}
	printf("%d", j);
}
