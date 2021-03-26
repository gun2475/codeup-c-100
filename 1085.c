#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int h, b, c, s;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	double mb = (h * b * c * s) / 8;
	printf("%.1lf MB", mb/1024/1024);
}
