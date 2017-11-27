#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define LENGTH 12

int main(void)
{
    FILE *fp;
    fp = fopen("serial.txt","a");
    srand(time(0));
    int i,number = 0;
    double dig = 0;
    for(i = 1;i <= LENGTH;i++)
    {
        /*
        if(i < 2)
            fprintf(fp,"%d",0);
        else
        */
        number = rand()%16;
        switch (number)
        {
            case 10:
                fprintf(fp,"%c",'A');
                break;
            case 11:
                fprintf(fp,"%c",'B');
                break;
            case 12:
                fprintf(fp,"%c",'C');
                break;
            case 13:
                fprintf(fp,"%c",'D');
                break;
            case 14:
                fprintf(fp,"%c",'E');
                break;
            case 15:
                fprintf(fp,"%c",'F');
                break;
            default:
                fprintf(fp,"%d",number);
        }
        dig += (number * pow(16,(LENGTH - i)));

        //dig += number * pow(2,(47-i));
    }
    fprintf(fp," ,%lf\n",dig);
    fclose(fp);
    system("C:\\Users\\Administrator\\Documents\\serial.txt");
    //MessageBox(NULL,TEXT("序列生成完毕"),TEXT("Success"),MB_OK);
    system("exit");

    return 0;

}
