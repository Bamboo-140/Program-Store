#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double i,j,jieguo;
    char fuhao,jixu,tmp;
			do
			{
				printf("�����������:");
				scanf(" %c",&fuhao);									   //�����һ���ո���Ϊ�˼������к󲻻����
				printf("�����������������ÿո�ָ�:");
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
							printf("��������Ϊ��!\n");						  //����Ϊ0ʱ�����û�
						else
						{
							jieguo=i/j;
							printf("%lf%c%lf=%lf\n",i,fuhao,j,jieguo);
						}
						break;	
					
					default :
						printf("�����������,����������!\n");					//���û������������ű���
						break;
						
				}
				
				printf("�Ƿ����(Y/N):\n");										//�ж��Ƿ����
				scanf(" %c",&jixu);
				if (jixu=='Y'||jixu=='y')										//ֻ���û�ȷ�������������������
				{
					printf("�Ƿ�����(C/N):\n");									//����
					scanf(" %c",&tmp);
					if(tmp=='c'||tmp=='C')
						system("cls");
				}
				
			}while(jixu=='Y'||jixu=='y');
				//system("pause");												//�����Է����� �� getchar();
return 0;
}