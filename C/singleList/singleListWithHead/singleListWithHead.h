#ifndef __SINGLELISTWITHHEAD_H__
#define __SINGLELISTWITHHEAD_H__


typedef int ElemType;

//数据结点
typedef struct node
{
    ElemType data;//数据域
    struct node* next; //指针域
}Node;

//头结点
typedef struct LinkedList
{
    Node* first;//指向链表中的第一个数据结点
    Node* last;//指向链表中最后一个数据结点

}LinkedList;


LinkedList* Create_LinkedList_v1(void);
LinkedList* Create_LinkedList_v2(void);

void Insert(LinkedList *l, Node* p);

void print_list(LinkedList* l);

#endif