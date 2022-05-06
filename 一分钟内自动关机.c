#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	while (1)
	{	char arr[20] = "";
	 	scanf("%s", arr);
		printf("电脑将在一分钟内关机，如果输入；%s是我爹，就取消关机\n", arr);
		scanf ("%s",input);
		if(0 == strcmp(input, arr))
		{
			printf("已取消关机");
			system("shutdown -a");
			break; 
		}
	}
	return 0;
}
