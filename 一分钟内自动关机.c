#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
	while (1)
	{
		printf("���Խ���һ�����ڹػ���������룻�˳�����ҵ�����ȡ���ػ�\n");
		scanf ("%s",input);
		if(0 == strcmp(input,"�˳�����ҵ�"))
		{
			printf("��ȡ���ػ�");
			system("shutdown -a");
			break; 
		}
	}
	return 0;
}
