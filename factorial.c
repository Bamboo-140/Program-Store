#include <stdio.h>
#define N 10
//求N的阶乘

unsigned long factorial_0(int n);    //函数循环实现
unsigned long factorial_1(int n);    //函数递归实现

int main(void)
{
    unsigned long result = 0;
    result = factorial_1(N);
    printf("\n%d! = %u ",N,result);
    return 0;
}
unsigned long factorial_0(int n)
{
    unsigned long result = 0;
    if(0 < n)
    result = n;
    else
    return 1;
    while (n > 1)
    {
        result *= (--n);      //n = n*(n-1) 直到 --n == 1为止
    }
    return result;
}

unsigned long factorial_1(int n)
{
    if(n <= 0)    //规定0的阶乘为1
        return 1;
    else
        return n *factorial_1(n-1);    //直到n-1 == 0 返回1 再一个一个返回2,3,4，...，n-1.
}
