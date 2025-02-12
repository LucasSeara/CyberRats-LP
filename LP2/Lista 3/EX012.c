#include <stdio.h>
void calc_esfera(float r, float *area, float *volume)
{
    float pi = 3.14;
    *area = 4 * pi * (r * r);
    *volume = 1.33 * pi * (r * r * r);
}
int main()
{
    float raio;
    float area, volume;
    printf("Digite o valor do raio da circunferencia:\n");
    scanf("%f", &raio);
    calc_esfera(raio, &area, &volume);
    printf("A area = %.1f\n", area);
    printf("O volume = %.1f\n", volume);
    return 0;
}