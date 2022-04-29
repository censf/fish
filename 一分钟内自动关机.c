#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将在一分钟内关机，如果输入；岑顺峰是我爹，就取消关机\n");
		scanf ("%s",input);
		if(0 == strcmp(input,"岑顺峰是我爹"))
		{
			printf("已取消关机");
			system("shutdown -a");
			break; 
		}
	}
	return 0;
}
