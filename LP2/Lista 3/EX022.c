#include <stdio.h>
int main()
{
    int vet[5];
    int *p;
    p = vet;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor da array:\n", i + 1);
        scanf("%d",&vet[i]);
    }
    for (i = 0; i < 5; i++)
    {
        *(p + i) = *(p + i) * 2;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
