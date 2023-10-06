#include <stdio.h>

int main(void)
{
    int matriz1[4][4];
    int matriz2[4][4];
    int soma1 = 0, soma2 = 0, resultado;

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("Insira o %d numero da linha %d da primeira matriz: ", coluna + 1, linha + 1);
            scanf(" %d", &matriz1[linha][coluna]);
            soma1 = soma1 + matriz1[linha][coluna];
        }  
    }
    
    printf("\n===================================================\n");

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("Insira o %d numero da linha %d da segunda matriz: ", coluna + 1, linha + 1);
            scanf(" %d", &matriz2[linha][coluna]);
            soma2 = soma2 + matriz2[linha][coluna];
        }  
    }

    printf("\n===================================================");

    resultado = soma1 * soma2;

    printf("\nA multiplicacao das matrizes eh: %d", resultado);

    printf("\n===================================================\n");
    
    return 0;
}