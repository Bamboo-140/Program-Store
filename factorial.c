#include <stdio.h>
#define N 10
//��N�Ľ׳�

unsigned long factorial_0(int n);    //����ѭ��ʵ��
unsigned long factorial_1(int n);    //�����ݹ�ʵ��

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
        result *= (--n);      //n = n*(n-1) ֱ�� --n == 1Ϊֹ
    }
    return result;
}

unsigned long factorial_1(int n)
{
    if(n <= 0)    //�涨0�Ľ׳�Ϊ1
        return 1;
    else
        return n *factorial_1(n-1);    //ֱ��n-1 == 0 ����1 ��һ��һ������2,3,4��...��n-1.
}
