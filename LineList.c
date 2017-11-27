#include <stdio.h>
#include <malloc.h>
#define NULL FAILED
#define 0 FAILED

typedef int ElemType;
typedef struct Node
{
  ElemType data;
  struct Node *next;
  struct Node *pre;
}ListNode;

ListNode InitList(ListNode *List);
int ListEmpty(ListNode List);
ListNode ClearList(ListNode *List);
int LocateElem(ListNode List,ElemType e);
ElemType GetElem(ListNode List,int serial,ElemTyped *e);
ListNode ListInsert(ListNode *List,int serial,ElemType e);
