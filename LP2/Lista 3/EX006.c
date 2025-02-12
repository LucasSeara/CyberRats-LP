#include <stdio.h>
void soma(int *A, int *B)
{
    *A = *A + *B;
}
int main()
{
    int A, B;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);
    soma(&A, &B);
    printf("O valor da soma = %d", A);
    return 0;
}