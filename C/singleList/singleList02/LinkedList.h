#ifndef __SINGLIST_H__
#define __SINGLIST_H__

//数据元素类型
typedef int ElemType;

//数据结点
typedef struct node
{
    ElemType data;//数据域
    struct node* next;//指针域 保存下一个元素的地址
}Node;

Node* Create_linkedList(void);
void print_list(Node *p);






#endif