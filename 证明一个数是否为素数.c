#include<stdio.h>
int get_max(int x)
{
	int s = 0;
	for ( s = 2; s < x; s++)
	{
		if(x % s == 0)
		{
			return 0;
		}	
	}

	return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int max = get_max(n);
	if( max == 0)
	{
		printf("%d��������", n);
	}
	else
	{
		printf("%d������", n);
	}
	return 0;
}
