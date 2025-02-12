#include <stdio.h>
void le_notas(int *n1, int *n2)
{
    printf("Digite o valor da primeira nota:\n");
    scanf("%d", n1);
    if ((*n1 > 0) && (*n1 <= 10))
    {
        printf("Digite o valor da segunda nota:\n");
        scanf("%d", n2);
    }
}
int media_simples(int *n1, int *n2)
{
    int media;
    media = (*n1 + *n2) / 2;
    return media;
}
int media_ponderada(int *n1, int *n2)
{
    int media;
    media=((*n2*2)+*n1)/3;
    return media;
}
void exibe_dados(int *n1, int *n2, int *media, int *mediaPonderada)
{
    printf("O valor da primeira nota eh %d\n", *n1);
    printf("O valor da segunda nota eh %d\n", *n2);
    printf("A media simples = %d\nA media ponderada = %d", *media, *mediaPonderada);
}
int main()
{
    int n1, n2, media, mediaPonderada;
    le_notas(&n1, &n2);
    media = media_simples(&n1, &n2);
    mediaPonderada = media_ponderada(&n1, &n2);
    exibe_dados(&n1, &n2, &media, &mediaPonderada);
    return 0;
}