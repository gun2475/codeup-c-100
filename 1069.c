#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char sibal;
	scanf("%c", &sibal);
	if (sibal == 'A')
		printf("best!!!");
	else if (sibal == 'B')
		printf("good!!");
	else if (sibal == 'C')
		printf("run!");
	else if (sibal == 'D')
		printf("slowly~");
	else
		printf("what?");
}
