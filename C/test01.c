#include<stdio.h>

int main()
{
    char c = 250;
    unsigned char d;
    char f;
    d = c + 249;
    f = c + 249;
    printf("%d\n",d);
    printf("%u\n",d);

    printf("%d\n",f);
    printf("%u\n",f);
    printf("%d",(int)(1.99));

    return 0;

}