#include <stdio.h>
int main()
{
    float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    float *p;
    p=vet;
    for (i = 0; i < 10; i++)
    {
        printf("%p ", p+i);
    }
    return 0;
}