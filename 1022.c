#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);
}
