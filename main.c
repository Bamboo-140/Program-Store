#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	int line =0;
	int count = 0;
	int state = 0;
	int errorLine = 0;
	char ch;

	system("color 2f");
	if((argc >= 2) && fopen(argv[1],"r"));
	else
	fp =fopen("test.c","r");
	while((ch = fgetc(fp)) != EOF)
	{
		if (ch == '\n')
			line++;   //ͳ������
		else if(ch == '{')     //�������һ������ ����״̬��Ϊ1,һ�����ر����������и�������Ƕ������
			//state = 1;    //��Ϊ��
			state ++;
		else if(ch == '}')     //���������һ����֮��Ӧ�ġ�  ����״̬��Ϊ0 ������ͬ��   ��Ϊ�Լ�����
		{
			state --;
			count ++;
			if(state != 0)
			{
				errorLine = line;
			}
		}

	}
	if(state > 0)
		printf("ȱ�����%d�ж�Ӧ��β����%d��\n",errorLine,state);
	else if (state < 0)
		printf("ȱ�����%d�ж�Ӧ��ͷ����%d��\n",errorLine,abs(state));
	else
		printf("��ȱ�����ţ�����%d�У�%d�Դ����š�\n",line,count);
	if(state != 0)
		system("color cf");

	return 0;
}
