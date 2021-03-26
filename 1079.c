#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char c = 'a';
	while (c != 'q')
	{
		scanf("%c", &c);
		if (c == ' ')
			;
		else
			printf("%c\n", c);
	}
}
