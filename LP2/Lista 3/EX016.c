#include <stdio.h>
int main()
{
    int inteiro = 10;
    float real = 1.8;
    char carac = 'c';
    int *i;
    float *r;
    char *c;
    i = &inteiro;
    r = &real;
    c = &carac;
    printf("inteiro=%d\n", inteiro);
    printf("real=%.1f\n", real);
    printf("char=%c\n", carac);
    *i = 20;
    *r = 3.1;
    *c = 'k';
    printf("Apos a alteracao dos valores:\n");
    printf("inteiro=%d\n", inteiro);
    printf("real=%.1f\n", real);
    printf("char=%c\n", carac);
    return 0;
}