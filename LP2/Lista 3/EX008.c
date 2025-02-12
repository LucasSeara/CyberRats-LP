#include <stdio.h>
int fracionario(float num, int *inteiro, float *frac)
{
    *inteiro = num;
    *frac = num - *inteiro;
    return 0;
}
int main()
{
    float num;
    int inteiro;
    float frac;
    printf("Digite um numero real:\n");
    scanf("%f", &num);
    fracionario(num, &inteiro, &frac);
    printf("Parte inteira:%d\n", inteiro);
    printf("Parte decimal:%.2f\n", frac);
    return 0;
}