#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, sum = 0;
	int j = 0;
	scanf("%d", &i);
	while (sum < i)
	{
		j++;
		sum += j;
		
	}
	printf("%d", j);
}
