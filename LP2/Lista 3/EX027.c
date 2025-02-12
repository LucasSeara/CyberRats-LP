#include <stdio.h>
int main()
{
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("O dobro de a= %d\n", (*b * 2));
    printf("O triplo = %d\n", (**c * 3));
    printf("O quadruplo = %d\n", (***d * 4));
    return 0;
}