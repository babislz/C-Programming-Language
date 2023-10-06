#include <stdio.h>
int main(void)
{
    int matriz[4][3];

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("Insira o %d numero da linha %d: ", coluna + 1, linha + 1 );
            scanf(" %d", &matriz[linha][coluna]);
        }
    }
    
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("| %d |", matriz[linha][coluna]);
        }
    printf("\n");
    }
    
}