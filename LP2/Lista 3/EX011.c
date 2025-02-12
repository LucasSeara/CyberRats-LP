#include <stdio.h>
int soma_dobro(int *a, int *b)
{
    int soma;
    *a = *a * 2;
    *b = *b * 2;
    soma = *a + *b;
    return soma;
}
int main()
{
    int a, b;
    int soma;
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    soma = soma_dobro(&a, &b);
    printf("O dobro de A=%d\nO dobro de B=%d\n", a, b);
    printf("A soma do dobro =%d\n", soma);
    return 0;
}