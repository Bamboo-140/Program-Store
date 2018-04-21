#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGHT 32
/// 不知道为什么输入64出问题，可能由于我用的是32位编译器 ///

long long int getval(void);
void fillarray(int *arr,int value);
void creatbuma(int *fanma);

int main(void)
{
    long long int value,switchval;

    while(1)
    {
        int result[MAX_LENGHT] = {0};            //存储结果的数组
        int fanma[MAX_LENGHT];
        fillarray(fanma,1);                      //填充数组为1
        int i = 0;                               //数组记录增量
        switchval = getval();                    //调用取值函数
        value = abs(switchval);
        do
        {
            if(value & 1)
            {
                //putchar('1');
                *(result + i) = 1;
                *(fanma + i) = 0;
            }
            else
            {
				//putchar('0');
                *(result + i) = 0;               //因为这个输出是反的,所以正向记录结果,最后再反向输出
                *(fanma + i) = 1;
            }
            i++;
        }
        while((value >>= 1) != 0);             //数值右移直到值为零,每右移一位,其值除以2一次
        creatbuma(fanma);
        for(int j = MAX_LENGHT - 1;j >= 0 ;j --)    //反向输出数组
        {
            if(switchval >= 0)
                printf("%d",result[j]);
            else
            {

                printf("%d",fanma[j]);
            }
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
    printf("请输入一个整数（Ctrl + C 退出）:");
    scanf("%lf",&tempval);                         //防止输入小数进入死循环
    val = (long long)tempval;                      //强转为长整型
    if(tempval - (long long)tempval)               //如果不小心输入了小数，则提示
        printf("\n请遵守规则输入整数!此次已经忽略小数。\n");
        #if(0)
    if(val < 0)                                    //如果输入负数结束
        exit(0);
    else
        #endif
        return val;
}

/// 用value填充arr所指向的数组 ///
void fillarray(int *arr,int value)
{
    for(int i = 0; i < MAX_LENGHT; i ++)
    {
        *(arr + i) = value;
    }
}
/// 根据反码生成补码，补码是反码+1 ///
void creatbuma(int *fanma)
{
    //int temp = 0;
    for(int i = 0; i < MAX_LENGHT;i ++)        //模拟给进制位+1，当加到2时将该位值改为0，继续为下一位+1直到遇到0为止。
    {
        if(++(*(fanma + i)) == 2)
        {
            (*(fanma + i)) = 0;
        }
        else
            break;
    }
}


/// 递归输出参数二进制 ///
void to_binary(int value)
{
    if(value != 0)
        to_binary(value>>1);
    if(value)    //避免首位为零
        printf ("%d",(value&1));
}
