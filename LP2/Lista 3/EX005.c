#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void concatenar(int numeroGerado, char *gabarito[11], int posicaoGabarito)
{
    *gabarito[posicaoGabarito] = numeroGerado;
}
int main()
{
    char respostaJogador1[10];
    char respostaJogador2[10];
    char gabarito[11];
    int posicaoGabarito = 0;
    int numeroGerado;
    int flag = 0;
    srand(time(NULL));
    while (flag == 0)
    {
        numeroGerado = 1 + rand() % 9;
        printf("%d", numeroGerado);
        concatenar(numeroGerado, gabarito, posicaoGabarito);
        flag = 1;
    }

    return 0;
}