#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGHT 32

long long int getval(void);

int main()
{
    long long int value;

    while(1)
    {
        int result[MAX_LENGHT] = {0};            //存储结果的数组
        int i = 0;                               //数组记录增量
        value = getval();                        //调用取值函数
        do
        {
            if(value & 1)
                //putchar('1');
                *(result+i) = 1;
            else
				//putchar('0');
                *(result+i) = 0;               //因为这个输出是反的,所以正向记录结果,最后再反向输出
            i++;
        }
        while((value >>= 1) != 0);             //数值右移直到值为零,每左移一位,值除以2一次

        for(int j = MAX_LENGHT - 1;j >= 0 ;j --)    //反向输出数组
        {
            printf("%d",result[j]);
            if(!(j % 4))
                putchar(' ');
                #if(0)                              //1行能容纳下就没有必要分行
            if(!(j % 16))
                putchar('\n');
                #endif
        }
        putchar('\n');
    }
    return 0;
}

///输入检测函数///
long long int getval(void)
{
    long long int val = 0;
    double tempval = 0.0l;                         //
    printf("请输入一个整数（输入负数退出）:");
    scanf("%lf",&tempval);                         //防止输入小数进入死循环
    val = (long long)tempval;                      //强转为长整型
    if(tempval - (long long)tempval)               //如果不小心输入了小数，则提示
        printf("\n请遵守规则输入整数!此次已经忽略小数。\n");
    if(val < 0)                                    //如果输入负数结束
        exit(0);
    else
        return val;
}
