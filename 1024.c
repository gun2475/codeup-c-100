#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char d[21];
	int a = 0;
	scanf("%s", d);
	for (int i = 0; d[i] != '\0';i++)
	{
		printf("\'%c\'\n", d[i]);
	}
}
