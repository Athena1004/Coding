#include<stdio.h>
#include"LinkedList.h"
#include<stdlib.h>


/**
 * @brief 根据用户的输入，建立一个单链表【按照用户输入的逆序 建立链表】，按照约定输入0结束
 * 
 * @return Node* 返回创建的这个单链表的第一个结点指针
 * eq: input 1 3 5 7 2 4 0
 * output 4 2 7 5 3 1
 */ 
Node* Create_linkedList_v2(void)
{
    int d;//保存每次用户输入的数据，约定输入0结束
    Node *first = NULL;//指向链表的第一个结点
    Node *last = NULL;//指向链表的最后结点
    Node *p = NULL;//指向当前的新的结点
    
    while(1)
    {
        scanf("%d", &d);
        if (d == 0)
        {
            break;
        }
        p = malloc(sizeof(*p));//这句不能放到while 外面去
        p->data = d;
        p->next = NULL;
        if(first == NULL)// empty list
        {
            first = p;
            last = p;
        }
        else
        {
            p->next = first;
            first = p;
        }

    }
    return first;

}



void print_list(Node *p)
{
    while(p)
    {
        printf("%d", p->data);
        p = p->next;
    }
    printf("\n");

}


int main()
{
    Node *h = Create_linkedList_v2(); 
    print_list(h);
    return 0;
}