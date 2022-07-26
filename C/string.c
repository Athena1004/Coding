#include<stdio.h>
/* strcpy实现 */
char * strcpy(char *dest, char *src)
{
    int i = 0;
    while(1)
    {
        if(*(src + i) == '\0')
        {
            *(dest + i) = '\0';
            break;
        }
        *(dest +i) = *(src + i);
        i++;
    }
    return dest;
}

/* strcpy实现 */
char *strcpy(char *dest, char *src)
{
    if(src == NULL || dest == NULL)
    {
        return;
    }

    char *p = dest;
    while(*src != '\0')
    {
        *p++ = *src++;

    }
    *p = '\0';
    return dest;
}

/* strcmp()实现 */
int strcmp(char *dest, char *src)
{
    int i = 0;
    while(1)
    {
        if(*(dest + i) > *(src + i))
        {
            return 1;

        }
        else if(*(dest + i) < *(src + i))
        {
            return -1;

        }
        else//*(dest + i) == *(src + i)
        {
           if(*(dest + i) == '\0')
           {
                return 0;

           }
        }
        i++;

    }

}

/* 
    strcat实现
 */

char *strcat(char *dest, char *src)
{
    int i = 0;
    while(*(dest + i) != '\0')//先把dest的值遍历到最后
    {
        i++;
    }
    int j = 0;
    while(*(src + j) != '\0')//当src遇到'\0'结束
    {
        *(dest + i) = *(src + j);//把src的值放到dest后面。
        i++;
        j++;

    }
    return dest;

}

char *strcat1(char *dest, char *src)
{
    char *p = dest;
    while(*p != '\0')
    {
        p++;

    }
    while(*src != '\0')
    {
        *p++ = *src++;
    }
    return dest;
}

int main()
{
    char s1[32];
    char s2[32];

    gets(s1);
    puts(strcpy(s2,s1));

    return 0;
}