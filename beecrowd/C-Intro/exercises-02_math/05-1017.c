#include <stdio.h>

int main() 
{
    float horas, velocidade, combustivel;
    scanf("%f %f", &horas, &velocidade);
    combustivel = (horas*velocidade) / 12;
    printf("%.3f\n", combustivel);

    return 0;
}