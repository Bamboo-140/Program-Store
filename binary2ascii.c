#include <stdio.h>
#include <stdlib.h>

void binary_to_ascii(int value);
int main(void)
{
    binary_to_ascii(4647);
    return 0;
}

void binary_to_ascii(int value)
{
    unsigned int number;
    number = value/10;
    if(number != 0)
        binary_to_ascii(number);
    putchar('0'+ value % 10);
    putchar(' ');
}
