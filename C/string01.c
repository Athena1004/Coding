#include<stdio.h>

int main()
{
    char *p = "abc";
    printf("%c\n",*p); 
    char ch = *p;
    printf("%c\n",ch);
    printf("66666666\n"); 
    /*int i;
    for(i = 0; *(p + i) != '\0';i++)
    {
        printf("%c\n",p[i]);

    }*/
    p = "123";
    return 0;
}