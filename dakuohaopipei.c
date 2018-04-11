#include <stdio.h>
#include <stdlib.h>

int test(char ch,int state);     //测试大括号是否成对
int main(int argc,char *argv[])
{
    FILE *fp;
    fp = fopen("test.c","r");
    char ch;    //接受文件输入
    int inString = 0;    //字符串开关
    int inZhushi = 0;    //注释开关 1:可能是注释，2:单行注释，3:多行注释
    int temp = 0;   //多行注释辅助开关
    int state = 0;    //判断大括号是否成对，大于0 则缺少尾括号，如果小于0则缺少首括号。

    while( ( ch = fgetc(fp) ) != EOF)
    {
        if ((ch == '\"' && 0 == inString) || (1 == inString) && (ch != '\"'))
        {
            inString = 1;
            //continue;
        }
        else if(1 == inString && ch =='\"')
            {
                inString = 0;
                continue;
            }
            if(ch =='/' && 0 == inZhushi)    //如果不处于任何注释状态遇到了'/'
            {
                inZhushi = 1;
                //continue;
            }
            else if ((ch == '/') && 1 == inZhushi)
            {
                inZhushi = 2;
                 printf("%c此处为注释内容", 27);    //删除多余的'/'字符
                 //printf("\b");
                //continue;
            }
            else if ((ch == '*') && 1 == inZhushi)
            {
                inZhushi = 3;
                //continue;
            }

            else if (1 == inZhushi )
                inZhushi = 0;
            if(2 == inZhushi && ch == '\n')     //当处于单行注释并读到回车
            {
                //单行注释结束
                inZhushi = 0;
                //continue;
            }
            else if(3 == inZhushi && ch == '*' && 0== temp)     //当处于多行注释时读到'*'号
            {
                temp = 1;    //将temp 设置为1，只有下次读入'/'才真正退出注释
            }
            else if (3 == inZhushi && ch == '/' && 1 == temp)
            {
                inZhushi = 0;
            }
            else if(3 == inZhushi && 1 == temp)
                temp = 0;
            if (inZhushi > 1 || inString != 0)
                continue;

        putchar(ch);
        state = test(ch,state);
    }
    if(state != 0)
    {
        system("color cf");
        printf("\n\n文件中大括号不匹配,请检查！\n");
    }
    else
    {
        system("color 2f");
        printf("\n\n文件中大括号匹配！\n");
    }
    return 0;
}
int test(char ch,int state)
{
    if (ch == '{')
        state ++;
    else if (ch == '}')
        state --;
    return state;
}
