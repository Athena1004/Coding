#include<stdio.h>
#include<stdlib.h>
#include"singleListWithHead.h"



//创建一个空的带头结点的单链表
LinkedList* Create_LinkedList_v1(void)
{
    LinkedList *l = malloc(sizeof(*l));
    l->first = NULL;
    l->last = NULL;

    return l;
}

//创建一个不为空的带头结点的单链表
LinkedList* Create_LinkedList_v2(void)
{
    LinkedList *l = malloc(sizeof(*l));
    l->first = NULL;
    l->last = NULL;

    //指向新创建的数据结点
    Node* p = NULL;
    ElemType d;
    while(1)
    {
        //1.获取一个数据就创建一个节点
        scanf("%d", &d);
        if(d == 0)
        {
            break;
        }
        p = malloc(sizeof(*p));

        //2.把获取的数据写到新创建的节点
        p->data = d;
        p->next = NULL;

        //3.把新创建的节点加入到链表中
        if(l->first == NULL)
        {
            l->first = p;
            l->last = p;
        }
        else//尾插
        {
            l->last->next = p;
            l->last = p;
        }
        #if 0
        else//头插法
        {
            p->next = l->first;
            l->first = p;

        }
        #endif

    }
    return l;
    
}

/**
 * @brief 往一个带头结点的单链表上增加一个数据结点【指向链表升序，添加数据结点后依然升序】
 * 
 * @param l 指向头结点
 * @param p 要添加的数据结点
 */
void Insert(LinkedList *l, Node* p)
{
    //空链表,则p为第一个数据结点
    if(l->first == NULL)
    {
        l->first = p;
        l->last = p;
        return ;
    }

    //Insert分为两步
    //step1 找到insert position：遍历链表的数据结点，找到第一个比p大的结点pk,及pk前面的结点pr
    Node *pk = l->first;//pk指向链表的第一个结点，开始遍历
    Node *pr = NULL;
    while(pk)
    {
        if(pk->data > p->data)//找到了
        {
            break;
        }
        else//没找到继续找，知道pk遍历完为null
        {
            pr = pk;
            pk = pk->next;
        }
        
    }
    //step2: 分情况插入
    if(pk == NULL)//没找到pk, 说明p为最大，插在链表后面
    {
        l->last->next = p;
        l->last = p;
    }
    else//找到pk 分情况
    {
        if(pk == l->first)//第一个结点就比Pk大
        {
            p->next = l->first;
            l->first = p;
        }
        else
        {
            p->next = pk;
            pr->next = p;
        }
    }


}

void print_list(LinkedList*l)
{
    if(l == NULL)//链表不存在
    {
        return ;
    }
    LinkedList* p = l->first;
    while(p)
    {
        printf("%d", p->data);
        p = p->next;
    }
    printf("\n");
}