#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i;
	scanf("%d", &i);
	for (int j = 1; j <= i; j++)
	{
		if (j % 3 == 0)
		{

		}
		else
			printf("%d ", j);
	}
}
