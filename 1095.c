#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i;
	int a[10000];
	scanf("%d", &n); 
	for (i = 0; i < n; i++) 
		scanf("%d", &a[i]); 
	int speed = a[0];
	for (int i = 0; i < n; i++)
	{
		if (speed > a[i])
			speed = a[i];
	}
	printf("%d", speed);
}
