#include <stdio.h>
void preencher(int *vet, int n)
{
    int *p = vet;
    int i;
    for (i = 0; i < 5; i++)
    {
        *(p + i) = n;
    }
}
int main()
{
    int vet[5];
    int n, i;
    printf("Digite o valor que ira preencher o vetor:\n");
    scanf("%d", &n);
    preencher(vet, n);
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",vet[i]);
    }
    
    return 0;
}