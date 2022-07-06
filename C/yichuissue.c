#include<stdio.h>
#include<stdint.h>

int main()
{
    // char c = 253;
    // char d;
    // d = c + 192;
    // printf("%d\n", d);
    // printf("%u\n", d);
    // int16_t a;
    // a = INT16_MAX;
    // printf("%d\n", a);
    // uint16_t b;
    // b = UINT16_MAX;
    // printf("%d\n", b);
    // int16_t c;
    // c = UINT16_MAX;
    // printf("%d\n", c);
    // return 0;

    char ch = 253;
    ch = ch + 7;
    printf("%d\n", ch);
    printf("%u\n", ch);
    printf("%c\n", ch);
    printf("%x\n", ch);

    unsigned char ch1 = 253;
    ch1 = ch1 + 7;
    printf("%d\n", ch1);
    printf("%u\n", ch1);
    printf("%c\n", ch1);
    printf("%x\n", ch1);
    return 0;
}