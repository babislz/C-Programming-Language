#include <stdio.h>

int main(void)
{
    int imovel = 0;

    printf("\n");

    printf("Quantos imoveis foram vendidos? ");
    scanf("%d", &imovel);

    float *arr = malloc(imovel * sizeof(int));
    
    printf("\n===============================\n");

    for (int i = 0; i < imovel; i++)
    {
        printf("Insira o valor do %d imovel: ", i + 1);
        scanf(" %f", &arr[i]);
    }
    
    printf("\n===============================");

    for (int i = 0; i < imovel; i++)
    {
        printf("\nImovel %d: R$: %2.f", i + 1, arr[i]);
    }
    
    printf("\n===============================");

    free(arr);

    return 0;
}
