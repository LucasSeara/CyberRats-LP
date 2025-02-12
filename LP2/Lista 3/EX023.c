#include <stdio.h>
int main()
{
    int vet[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%p ", &vet[i]);
        }
    }

    return 0;
}