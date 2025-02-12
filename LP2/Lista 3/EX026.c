#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void imprimir_vetor(int *vet, int n)
{
    int i;
    int *p = vet;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}
int main()
{
    int vet[10];
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vet[i] = 1 + rand() % 20;
    }
    imprimir_vetor(vet, 10);
    return 0;
}