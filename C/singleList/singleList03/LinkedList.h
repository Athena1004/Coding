#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

//数据元素类型
typedef int ElemType;

//数据结点
typedef struct node
{
    ElemType data;//数据域
    struct node* next;//指针域 保存下一个元素的地址
}Node;

Node* Insert_v1(Node *h, Node *p);

//递归插入
Node* Insert_v2(Node *h, Node *p);



//根据用户的输入，建立一个单链表【按照用户输入的自然顺序 建立链表】
Node* Create_linkedList_v1(void);

//根据用户的输入，建立一个单链表【按照用户输入的逆序 建立链表】
Node* Create_linkedList_v2(void);

//递归插入创建链表
Node* Create_linkedList_v3(void);

Node* delete_x(Node*h, ElemType x);

Node* delete_all_x(Node *h, ElemType x);


void print_list(Node *p);

Node* reverse(Node* h);

Node* update(Node* h, ElemType x, ElemType a);


#endif