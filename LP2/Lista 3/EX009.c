#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void maior_num(int vet[30], int n)
{
    int i, j;
    int maior = 0;
    int cont = 0;
    int *p;
    p = vet;
    for (i = 0; i < n; i++)
    {
        cont=0;
        printf("%d ", *(p + i));
        if (*(p + i) > maior)
        {
            maior = *(p + i);
        }
        for (j = 0; j < n; j++)
        {
            if (maior == *(p + j))
            {
                cont++;
            }
        }
    }
    printf("O maior valor eh %d apareceu %d vezes:\n", maior, cont);
}
int main()
{
    int vet[30];
    srand(time(NULL));
    int i;
    for (i = 0; i < 30; i++)
    {
        vet[i] = 1 + rand() % 20;
    }
    maior_num(vet, 20);
    return 0;
}