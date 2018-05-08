/*根据网上的代码写的一个计时器*/
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
                    printf("\r%2d时%2d分%2d秒",h,m,s);
                }
            }
        }
    printf("\n时间到！\n\a"); // \a是让系统发出声音的一种表达方式
}
