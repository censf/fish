#include<stdio.h>
int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
	z = x;
	else
	z = y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}
