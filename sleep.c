#include<stdio.h>
#include<windows.h>
main()
{
    int h,m,s;
    /*
    for(j=0;j>=0;j--)
        {
            for(i=59;i>=0;i--)
            {
                Sleep(100);
                printf("\r0:%2d:%2d ",j,i);
            }
        }
        */
        for(h = 0 ;1;h++)
        {
            for(m = 0;m <= 59;m++)
            {
                for(s = 0;s <=59;s++)
                {
                    Sleep(1000);
                    printf("\r%2dʱ%2d��%2d��",h,m,s);
                }
            }
        }
    printf("\nʱ�䵽��\n\a"); // \a����ϵͳ����������һ�ֱ�﷽ʽ
}
