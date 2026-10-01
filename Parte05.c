#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void imprimirLista(No *inicio)
{
    No *atual = inicio;

    while (atual != NULL)
    {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }

    printf("NULL\n");
}

int main()
{

    No no1 = {10, NULL};
    No no2 = {20, NULL};
    No no3 = {30, NULL};

    no1.prox = &no2;
    no2.prox = &no3;

    imprimirLista(&no1);

    return 0;
}