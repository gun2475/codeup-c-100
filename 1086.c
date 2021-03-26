#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int r, g, b;
	scanf("%lld %lld %lld", &r, &g, &b);
	double mb = (r*g*b) / 8;
	printf("%.2lf MB", mb/1024/1024);
}
