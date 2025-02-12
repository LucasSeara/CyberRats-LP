#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vet[10];
    int *p;
    p = vet;
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vet[i] = 1 + rand() % 20;
    }
    printf("vetor:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        *(p + i) = *(p + i) + 1;
    }
    printf("Vetor alterado:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}