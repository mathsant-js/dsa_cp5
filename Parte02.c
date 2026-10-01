#include <stdio.h>

int vetor[] = {10, 20, 30, 40, 50};

int somaVetor(int vetor[], int n)
{
    // Caso base
    if (n == 0)
    {
        return 0;
    }

    // Chamada recursiva
    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

int maiorVetor(int vetor[], int n)
{
    // Caso base
    if (n == 1)
    {
        return vetor[0];
    }

    // Chamada recursiva
    int maior = maiorVetor(vetor, n - 1);

    if (vetor[n - 1] > maior)
    {
        return vetor[n - 1];
    }

    return maior;
}

int main(void)
{
    int n = 5;

    printf("Soma = %d\n", somaVetor(vetor, n));
    printf("Maior = %d\n", maiorVetor(vetor, n));

    return 0;
}