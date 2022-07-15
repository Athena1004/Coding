#include<stdio.h>
#include"LinkedList.h"
#include<stdlib.h>


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