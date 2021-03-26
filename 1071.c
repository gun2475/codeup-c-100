#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
reload:
	scanf("%d", &num);
	if (num != 0)
	{
		printf("%d\n", num);
		goto reload;
	}
}
