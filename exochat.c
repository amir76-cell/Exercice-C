#include <stdio.h>

int main()
{
    int n;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Le nombre est positif");
    }
    else
    {
        printf("Le nombre est negatif");
    }

    return 0;
}