#include <stdio.h>
#include <string.h>
#define SUCCESS 1
#define FAILDED 0

void output(int);
int main(void)
{
    output(2000);
    putchar('\n');

    return 0;
}

void output(int maxvalue)
{
    int i = 1;int j = 1;int l = 0;

    for(;1;l = 1)
	{
		if(l == 0)
		{
			printf("%4d %4d",i,j);
		}
		i += j;
        j += i;
		printf(" %4d %4d ",i,j);
        if (i + j >= maxvalue)
            break;
	}

}
