#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256

int main()
{
    char ch[MAX_LEN];
    int i = 0;
    char *pwd = "12345678";    //��������룬�����Ƚ��Ƿ���ȷ
    /*
    while(1)
    {
        switch(getch()){
           case 224:                    //���������ASCII��
             switch(getch()){
                case 72:
                   //��
                   printf("\r��");
                   break;
                case 80:
                    //��
                    printf("\r��");
                    break;
                case 75:
                    //��
                    printf("\r��");
                   break;
                 case 77:
                   //��
                   printf("\r��");
                   break;
                 default:
                    printf("\r��Ч");
                    exit(0);
                    break;
             }
        }
    }
    */
    while(i < (MAX_LEN-1))
    {
        ch[i] = getch();    //ch�����洢�����
        if(ch[i] == 13)    //�������س����˳�   13�ǻس���ASCII��
        {
            //if(i <= 8)
                //printf("\nλ������8λ");
            ch[i] = '\0';
            break;
        }
        //putch('*');
        if(ch[i] != '\b')    //���û�������˸�
            i++;
        else
            {
                if(i <= 0)    //����±�С�ڵ���0 �����ѭ��
                    continue;
                else      //�����±��Լ�
                    i--;
            }

    }
    ch[MAX_LEN - 1] = '\0';

    printf("\n%s\n",ch);
    if(!strcmp(ch,pwd))
        printf("������ȷ��\n");
        else
        printf("���󣡣�\n");
    system("pause");
    return 0;
}
