#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int soma_vetor(int vetA[10], int vetB[10], int vetC[10])
{
    int i;
    int *p, *q, *r;
    p = vetC;
    q = vetA;
    r = vetB;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = *(q + i) + *(r + i);
        vetC[i] = *(p + i);
    }
    return 0;
}
int main()
{
    int vetA[10];
    int vetB[10];
    int vetC[10];
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vetA[i] = 1 + rand() % 20;
        vetB[i] = 1 + rand() % 20;
    }
    soma_vetor(vetA, vetB, vetC);
    printf("vetor A:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetA[i]);
    }
    printf("\n");
    printf("Vetor B\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetB[i]);
    }
    printf("\n");
    printf("Soma dos vetores:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetC[i]);
    }

    return 0;
}