#include<stdio.h>
#include"LinkedList.h"
#include<stdlib.h>


Node* Insert_v1(Node *h, Node *p)
{
    if(h == NULL)//在一个空链表中插入一个结点p
    {
        return p;
    }
    if(p == NULL)
    {
        return h;
    }
    //分两步，1.找插入位置，在链表中找到第一个比p大的值结点pk，及前面的结点pr.
    Node *pk = h;//pk指向链表中第一个比p值大的点
    Node *pr = NULL;//pr指向pk前面的那个结点
    while(pk)//遍历链表，pk不为NULL
    {
        if(pk->data > p->data)
        {
            break;//找到比p大的点
        }
        pr = pk;//保证pr指向pk的前面一个
        pk = pk->next;
    }

    //2.分情况插入操作
    if(pk == NULL)//p是最大的，pk没有找到：没有找到比P大的结点，pr指向原链表的最后一个结点【尾插法】
    {
        pr->next = p;

    }
    else
    {
        if(pk == h)//p是最小的，原链表第一个结点就比p大
        {
            p->next = pk;
            h = p;//p为新的头结点
        }
        else//pk指向的结点在中间, p插在pk前，pr后。
        {
            p->next = pk;
            pr->next = p;

        }
    }

    return h;

}

Node* Insert_v2(Node *h, Node *p)
{
    if(h == NULL)//在一个空链表中插入一个结点p
    {
        return p;
    }
    if(p == NULL)
    {
        return h;
    }

    if(p->data > h->data)//找到了
    {
       h->next = Insert_v2(h->next, p);
    }
    else
    {
        p->next = h;//p为最小的
        h = p;
    }
    return h;
  
}

/**
 * @brief 根据用户的输入，建立一个单链表【按照用户输入的自然顺序 建立链表】，按照约定输入0结束
 * 
 * @return Node* 返回创建的这个单链表的第一个结点指针
 * eq: input 1 3 5 7 2 4 0
 */
Node* Create_linkedList_v1(void)
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
        p = malloc(sizeof(*p));//这句不能放到while 外面去,每次等待用户输入完成数据，都需要申请一块空间
        p->data = d;
        p->next = NULL;//下一个数据还没来
        if(first == NULL)// empty list
        {
            first = p;
            last = p;
        }
        else
        {
            last->next = p;
            last = p;
        }

    }
    return first;

}


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



Node* Create_linkedList_v3(void)
{
    int d;//保存每次用户输入的数据，约定输入0结束
    Node *h = NULL;//指向链表的第一个结点
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
        h = Insert_v2(h, p);
    }
    return h;
}


/**
 * @brief 删除h指向无序链表中值为x的第一个结点
 * 
 * @param h 指向链表的第一个结点
 * @param x 要删除结点的值
 * @return Node* 返回删除后的链表的第一个结点
 */
Node* delete_x(Node*h, ElemType x)
{
    Node *px = NULL;//指向要删除的结点
    Node *pr = NULL;//指向px前面的那个结点
    // step1.找到那个要删除的结点
    px = h;
    while(px)
    {
        if(px->data == x)
        {
            break;
        }
        pr = px;
        px = px->next;
    }
    if(px == NULL)//没找到x，返回原链表
    {
        return h;
    }
    //step 2.分情况讨论
    if(px == h)//找到的px为第一个结点
    {
        h = h->next;
        px->next = NULL;
        free(px);
    }
    else
    {
        pr->next = px->next;
        px->next = NULL;
        free(px);
    }

    return h;
}


/**
 * @brief 删除h指向的链表中值为x的所有结点
 * 
 * @param h 指向链表的第一个结点 无序
 * @param x 要删除的结点的值
 * @return Node* 返回删除后链表的第一个结点
 */
Node* delete_all_x(Node *h, ElemType x)
{
    Node *px = NULL;//指向要删除的结点
    Node *pr = NULL;//指向px前面的那个结点
    // step1.找到那个要删除的结点
    px = h;
    while(px)
    {
        if(px->data == x)
        {
            // step2 删除所有x结点
            if(px == h)
            {
                h = h->next;
                px->next = NULL;
                free(px);
                px = h;
            }
            else
            {
                pr->next = px->next;
                px->next = NULL;
                free(px);
                px = pr->next;
            }
        }
        else
        {
            pr = px;
            px = px->next;
        }
    }
    return h;
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


/**
 * @brief 就地逆置一个单链表
 * 
 * @param h 单链表的头结点
 * @return Node* 逆置后单链表的头结点
 */
Node* reverse(Node* h)
{
    Node* p = h->next;
    Node* pf = h;
    h = h->next;
    pf->next = NULL;

    while(p)
    {
        h = h->next;
        p->next = NULL;
        p->next = pf;
        pf = p;
        p = h;
    }
    return pf;
}


Node* update(Node* h, ElemType x, ElemType a)
{
    Node *p = h;
    while(p)
    {
        if(p->data == x)
        {
            p->data = a;
        }
        p = p->next;
    }
    return h;
}


int main()
{
    Node *h = Create_linkedList_v3(); 
    //Node *h = Create_linkedList_v1();
    //Node *h = Create_linkedList_v2();
    print_list(h);
    h = reverse(h);
    print_list(h);
    h = update(h, 2, 6);
    print_list(h);
    int x;
    scanf("%d", &x);
    h = delete_all_x(h, x);
    //h = delete_x(h, x);
    print_list(h);
    return 0;
}