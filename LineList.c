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
};

struct Node InitList(&List);
int ListEmpty(List);

