#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct ListNode
{
	int number;
	int count;
	struct ListNode *next;
	struct ListNode *pre;
}Node;

int count = 0;
int i = 0;


int main(void)
{
	struct ListNode *p1,*head,*p2;
	srand (time(0));
	head = (void *)malloc(sizeof(struct ListNode));
	if (head == NULL)
	{
		printf("Erro of apply memery!\nPress any key to exit.");
	}
	else
	{
		printf("head applyed is ok! \n Press any key to exit.\n");
	}

	p1 = p2 = (void *)malloc(sizeof(struct ListNode));

for( i = 0; i < 10; i++)
{
	if(!p1)
	{
		printf("Error of apply memory! \n Press any key to exit.");
		exit(0);
	}
	else
	{
		//printf("p1 p2 applyed is ok! \n Press any key to exit.\n");
		count ++;
	}
	//free(head);
	if (count == 1)
    {
        head->next = p1;
        p1 ->pre
    }
	p1->number = rand()%100;
	p1 ->count = count;
	p1 ->next = NULL;
	p2->next = p1;
	p2 = p1;
	p1 = (void *)malloc(sizeof(struct ListNode));
}

    struct ListNode *p;
    p = head->next;
    while (p->next)
    {
        printf("%d, %2d\n",p->count,p->number);
        p = p ->next;
    }


	system("Pause");
	return 0;
}
