#include <stdio.h>
int somatorio(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return n + somatorio(n - 1);
}
int main(void)
{
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Somatorio = %d\n", somatorio(n));
    return 0;
}
