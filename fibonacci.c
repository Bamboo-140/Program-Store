#include <stdio.h>
unsigned long fibonacci(int n);
unsigned long fibonacci_1(int n);
static int count = 0;
int main(void){
unsigned long result = 0;
    for(int i = 0 ; i< 10 ;i ++)
    {
        result = fibonacci(i);
        printf("%u,",result);
    }
    printf("\n\n\n共计调用了%d次\n\n",count);
    result = 0;
    count = 0;
     for(int i = 0 ; i< 10 ;i ++)
    {
        result = fibonacci_1(i);
        printf("%u,",result);
    }
        printf("\n\n\n共计调用了%d次\n\n",count);
        fibonacci_2(10);
    return 0;
}

unsigned long fibonacci(int n)
{
    count ++;
    //int i = 0;
    if(n < 2 )
    //printf("%d",1);
    return 1;
    else
    //printf("%d  " ,fibonacci(n-1) + fibonacci(n-2));
    return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned long fibonacci_1(int n)
{
    count ++;
    unsigned long int pre_fibonacci = 1;
    unsigned long int nex_fibonacci = 1;
    unsigned long int result = 1;
    while(n >= 2)
    {
        n--;
        nex_fibonacci = pre_fibonacci;
        pre_fibonacci = result;
        result = pre_fibonacci + nex_fibonacci;

    }
    return result;
}

void fibonacci_2(int value)
{
    int k = 0;
    unsigned long f1,f2,res;
    f1 = 1;
    f2 = 1;
    res = 1;
    while(k < value)
    {
        if(k < 2)
            printf("%d ",1);
            else
        {
            res = f1 + f2;
            printf("%u ",res);
            f2 = f1;
            f1 = res;
        }
       k++;
    }
}
