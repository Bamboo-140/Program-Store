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

ListNode InitList(ListNode *List);    //初始化线性表
int ListEmpty(ListNode List);     //判断表是否为空
ListNode ClearList(ListNode *List);    //清空数据表
int LocateElem(ListNode List,ElemType e);    //返回元素e再表中的位置
ElemType GetElem(ListNode List,int serial,ElemTyped *e);    //获取第serial位的元素的值，如果没找到返回0
ListNode ListInsert(ListNode *List,int serial,ElemType e);    //在第serial位添加一个元素e
ListNode ListDelete(ListNode *List,int serial,ElemType e);    //删除第serial位的元素e
int ListLength(ListNode List);    //获取表长
