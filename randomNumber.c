#include <stdio.h>
#include <string.h>

int main( int argc ,char * argv[])
{
    //char c_array[17] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','\0'};
    char all_array[93],low_character[26],upper_character[26],number[10];
    int i,j,serial = 0;
    char c;
    srand(time(0));
    printf("                        ASCII Âë ±í");
    printf("\n------------------------------------------------------------\n");
    printf(" ×Ö·û|ASCII| ×Ö·û|ASCII| ×Ö·û|ASCII| ×Ö·û|ASCII| ×Ö·û|ASCII|");
    printf("\n------------------------------------------------------------\n");
    ///Ìî³äËùÓÐ¿É´òÓ¡Êä³öµÄ×Ö·û
    for(i = 32,j = 1;i < 127;i++,j++)
    {
        all_array[j] = i;
        //putchar(all_array[j]);
        printf("  %c  | %3d |",all_array[j],all_array[j]);
        if(!(j%5))
        {
            //putchar('\n');
            printf("\n------------------------------------------------------------\n");
        }
    }

    /*
    for(i = 0;i <= 92;)
    {
        if((c = rand()%127) < 32)
            continue;
        i++;
        printf("%c",c);
    }
    */

    /*
    for(i = 0;i < 12;i++)
    {
        serial = rand()%16;
        putchar(c_array[serial]);
    }
*/
    system("pause");
    return 0;
}
