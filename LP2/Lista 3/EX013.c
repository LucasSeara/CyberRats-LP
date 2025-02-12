#include <stdio.h>
int negativos(float *vet, int n)
{
    int cont = 0;
    int i;
    float *p;
    p = vet;
    for (i = 0; i <= n; i++)
    {
        if (*(p + i) < 0)
        {
            cont++;
        }
    }
    return cont;
}
int main()
{
    float vet[10] = {-1, 4, 10 - 3, 11, -1, 7, 8, -2, 0};
    int quantidade;
    quantidade = negativos(vet, 8);
    printf("A quantidade de numero negativos =%d", quantidade);
    return 0;
}