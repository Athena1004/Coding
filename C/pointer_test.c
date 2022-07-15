#include<stdio.h>

int main()
{
    /*
    int a;
    int *b;
    char *c;
    b = &a;
    c = (char *)&a;
    printf("%p\n",b);
    printf("%p\n",b + 1);
    printf("%p\n",c);
    printf("%p\n",c + 1);
    printf("=================\n");
    printf("%u\n",(int)b);
    printf("%u\n",(int)(b+1));
    printf("%u\n",(int)c);
    printf("%u\n",(int)(c + 1));
    printf("=================\n");
    printf("%u\n",(int)b);
    printf("%u\n",(int)(b-1));
    printf("%u\n",(int)c);
    printf("%u\n",(int)(c - 1));
    printf("=================\n");
    int d[5] = {0};
    printf("%p\n",d);
    printf("%p\n",&d[0]);*/

    int f[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("f = %p, f + 1 = %p, &f + 1 = %p\n",f, f + 1, &f + 1);

    return 0;
}