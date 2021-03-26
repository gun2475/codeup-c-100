#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i = 1;
	while (i != 0)
	{
		scanf("%d", &i);
		if (i == 0)
			break;
		printf("%d\n", i);
	}
}
