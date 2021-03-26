#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	long long int sum = a;
	for (int i = 1; i < c; i++)
	{
		sum = sum * b;
	}
	printf("%lld", sum);
}
