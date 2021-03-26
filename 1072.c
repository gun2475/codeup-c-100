#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, num2=0;
	int a;
	scanf("%d", &num);
reload:
	if (num2 != num)
	{
		scanf("%d", &a);
		printf("%d\n", a);
		num2++;
		goto reload;
	}
}
