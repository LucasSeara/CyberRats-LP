#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void vetor(int *vet, int n, int k, int *maior)
{
    int cont = 0;
    int i;
    int *p;
    p = vet;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
        cont++;
        if (*(p + i) > *maior)
        {
            *maior = *(p + i);
        }

        if (cont == k)
        {
            printf("\n");
            cont = 0;
        }
    }
    printf("\n");
}
int main()
{
    int n, i, k;
    int vet[30];
    int maior = 0;
    srand(time(NULL));
    printf("Digite a quantidade de valores que o vetor ira receber:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        vet[i] = 1 + rand() % 30;
    }
    printf("Digite a quantidade de valores a serem impressos por linha:\n");
    scanf("%d", &k);
    vetor(vet, n, k, &maior);
    printf("O maior valor =%d", maior);
    return 0;
}