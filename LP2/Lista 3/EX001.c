#include <stdio.h>
void troca_valor(int *A,int *B){
    int aux;
    aux=*A;
    *A=*B;
    *B=aux;
}
int main()
{
    int A,B;
    printf("Digite o valor de A:\n");
    scanf("%d",&A);
    printf("Digite o valor de B:\n");
    scanf("%d",&B);
    troca_valor(&A,&B);
    printf("A=%d\nB=%d",A,B);
    return 0;
}