#include <stdio.h>
int ordena_valor(int *A, int tam)
{
    int i, j;
    int aux = 0;
    int flag;
    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (A[i] < A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    if ((A[0] == A[1]) && (A[0] == A[2]))
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int main()
{
    int A[3];
    int i;
    int flag;
    for (i = 0; i < 3; i++)
    {
        printf("Digite o valor %d \n", i + 1);
        scanf("%d", &A[i]);
    }
    flag = ordena_valor(A, 3);
    for (i = 0; i < 3; i++)
    {
        printf("%d ", A[i]);
    }
    if (flag)
    {
        printf("Todos os valores sao iguais:\n");
    }
    else
    {
        printf("Os valores sao diferentes");
    }
    return 0;
}