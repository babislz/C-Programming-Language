#include <stdio.h>

int main(void)
{
    int tamanho;

    printf("Digite o numero de posicoes dentro do seu array: ");
    scanf("%d", &tamanho);

    int *arr = malloc(tamanho * sizeof(int));
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf(" %d", &arr[i]);
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    
    free(arr);

    return 0;
}