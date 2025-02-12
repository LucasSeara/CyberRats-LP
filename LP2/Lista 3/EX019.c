#include <stdio.h>
int main()
{
    int a, b;
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    if (&a>&b)
    {
        printf("O endereco A eh maior %d",a);
    }else
    {
        printf("O endereco B eh maior: %d\n",b);
    }
    
    
    return 0;
}