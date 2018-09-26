#ifndef _MY_SIMPLE_SORT
#define _MY_SIMPLE_SORT

#include <stdlib.h>
#include <string.h>

typedef void (*visitSqList)(int a);
typedef void (*setArrayData)(void *target,char *data,int pos);

typedef struct{
	int *elemArray;
	int length;
}SqList;

typedef struct elemLink{
	int key;
	struct elemLink *next;
}elemLink;

//初始化线性列表
void InitSqList(SqList *sq,char *elems);

//排序线性表
void SortSqList(SqList *sq);

//访问sqlist
void VisitSqList(SqList sq,visitSqList vsq);

//初始化线性链表
void InitElemLink(elemLink *header,char *elems);

//排序线性链表
void SortElemLink(elemLink *header);

#endif