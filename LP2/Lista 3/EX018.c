#include <stdio.h>
int main()
{
    int a, b;
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    printf("Endereco de A %p\n",&a);
    printf("Endereco de B %p\n",&b);
    if (&a>&b)
    {
        printf("O endereco A eh maior");
    }else
    {
        printf("O endereco B eh maior:\n");
    }
    
    
    return 0;
}