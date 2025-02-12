#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void vetor(int *vet, int *min, int *max)
{
    int i;
    for (i = *min; i <= *max; i++)
    {
        printf("%d ", vet[i]);
    }
}
int main()
{
    int vet[30];
    srand(time(NULL));
    int i;
    int min = 5;
    int max = 20;
    for (i = 0; i < 30; i++)
    {
        vet[i] = 1 + rand() % 30;
    }
    vetor(vet, &min, &max);
    return 0;
}