#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256

int main()
{
    char ch[MAX_LEN];
    int i = 0;
    char *pwd = "12345678";    //储存的密码，用来比较是否正确
    /*
    while(1)
    {
        switch(getch()){
           case 224:                    //方向键区的ASCII码
             switch(getch()){
                case 72:
                   //上
                   printf("\r上");
                   break;
                case 80:
                    //下
                    printf("\r下");
                    break;
                case 75:
                    //左
                    printf("\r左");
                   break;
                 case 77:
                   //右
                   printf("\r右");
                   break;
                 default:
                    printf("\r无效");
                    exit(0);
                    break;
             }
        }
    }
    */
    while(i < (MAX_LEN-1))
    {
        ch[i] = getch();    //ch用来存储密码的
        if(ch[i] == 13)    //如果输入回车则退出   13是回车的ASCII码
        {
            //if(i <= 8)
                //printf("\n位数不足8位");
            ch[i] = '\0';
            break;
        }
        //putch('*');
        if(ch[i] != '\b')    //如果没有输入退格
            i++;
        else
            {
                if(i <= 0)    //如果下标小于等于0 则继续循环
                    continue;
                else      //否则下标自减
                    i--;
            }

    }
    ch[MAX_LEN - 1] = '\0';

    printf("\n%s\n",ch);
    if(!strcmp(ch,pwd))
        printf("密码正确。\n");
        else
        printf("错误！！\n");
    system("pause");
    return 0;
}
