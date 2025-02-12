#include <stdio.h>
#include <math.h>
void calc1(float A, float B, float C, float *delta)
{
    *delta = (B * B) - 4 * A * C;
}
void raizes(float a, float b, float delta, float *x1, float *x2)
{
    *x1 = (-b + (sqrt(delta))) / (2 * a);
    *x2 = (-b - (sqrt(delta))) / (2 * a);
}
int main()
{
    float A, B, C;
    float deltas;
    float x1, x2;
    printf("Digite o valor de A:\n");
    scanf("%f", &A);
    printf("Digite o valor de B:\n");
    scanf("%f", &B);
    printf("Digite o valor de C:\n");
    scanf("%f", &C);
    calc1(A, B, C, &deltas);
    printf("Delta =%.1f\n", deltas);
    if (deltas < 0)
    {
        printf("Nao a raizes reais:\n");
    }
    if (deltas > 0)
    {
        raizes(A, B, deltas, &x1, &x2);
        printf("Possui 2 raizes:\n");
        printf("%.1f\n", x1);
        printf("%.1f\n", x2);
    }

    return 0;
}