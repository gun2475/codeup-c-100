#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	long long int sum = a;
	for (int i = 1; i < d; i++)
	{
		sum = sum * b;
		sum += c;
	}
	printf("%lld", sum);

}
