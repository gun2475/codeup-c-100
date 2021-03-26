#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	int sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	printf("%d\n%.1f",sum,(float)sum/3);
}
