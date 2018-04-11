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
			line++;   //统计行数
		else if(ch == '{')     //如果出现一个“｛ ”则状态改为1,一个开关变量，这样有个问题就是多层括号
			//state = 1;    //改为：
			state ++;
		else if(ch == '}')     //如果出现了一个与之对应的“  ｝”状态改为0 ，问题同上   改为自减更好
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
		printf("缺少与第%d行对应的尾括号%d个\n",errorLine,state);
	else if (state < 0)
		printf("缺少与第%d行对应的头括号%d个\n",errorLine,abs(state));
	else
		printf("不缺少括号，共有%d行，%d对大括号。\n",line,count);
	if(state != 0)
		system("color cf");

	return 0;
}
