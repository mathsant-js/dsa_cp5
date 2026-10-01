#include <stdio.h>
int vetor[] = {10, 20, 30, 40, 50};

int somaVetor(int vetor[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

int maiorVetor(int vetor[], int n)
{
    if (n == 1)
    {
        return vetor[0];
    }

    int maior = maiorVetor(vetor, n - 1);

    if (vetor[n - 1] > maior)
    {
        return vetor[n - 1];
    }

    return maior;
}