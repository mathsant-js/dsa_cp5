#include <stdio.h>
#include <stdlib.h>

typedef struct No No;

struct No
{
    int valor;
    No *proximo;
};

int buscar(No *inicio, int valor)
{
    No *atual = inicio;

    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            return 1;
        }

        atual = atual->proximo;
    }

    return 0;
}

int main(void)
{
    No no3 = {30, NULL};
    No no2 = {20, &no3};
    No no1 = {10, &no2};

    No *inicio = &no1;

    int valor;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    if (buscar(inicio, valor))
    {
        printf("Valor encontrado!\n");
    }
    else
    {
        printf("Valor nao encontrado.\n");
    }

    return 0;
}