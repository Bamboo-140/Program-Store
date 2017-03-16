#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double i,j,jieguo;
    char fuhao,jixu,tmp;
			do
			{
				printf("请输入运算符:");
				scanf(" %c",&fuhao);									   //这里多一个空格是为了继续运行后不会出错
				printf("请输入两个运算数用空格分隔:");
				scanf(" %lf %lf",&i,&j);
				switch(fuhao)
				{
					case '+':
						jieguo=j+i;
						printf("%lf%c%lf=%lf\n",i,fuhao,j,jieguo);
						break;
					
					case '-':
						jieguo=i-j;
						printf("%lf%c%lf=%lf\n",i,fuhao,j,jieguo);
						break;
					
					case '*':jieguo=i*j;
						printf("%lf%c%lf=%lf\n",i,fuhao,j,jieguo);
						break;
						
					case '/':
						if(j==0)
							printf("除数不能为零!\n");						  //除数为0时告诉用户
						else
						{
							jieguo=i/j;
							printf("%lf%c%lf=%lf\n",i,fuhao,j,jieguo);
						}
						break;	
					
					default :
						printf("符号输入错误,请重新输入!\n");					//当用户输入其它符号报错
						break;
						
				}
				
				printf("是否继续(Y/N):\n");										//判断是否继续
				scanf(" %c",&jixu);
				if (jixu=='Y'||jixu=='y')										//只有用户确定继续后才输出这段内容
				{
					printf("是否清屏(C/N):\n");									//清屏
					scanf(" %c",&tmp);
					if(tmp=='c'||tmp=='C')
						system("cls");
				}
				
			}while(jixu=='Y'||jixu=='y');
				//system("pause");												//它可以防闪退 或 getchar();
return 0;
}