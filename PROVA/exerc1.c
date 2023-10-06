#include <stdio.h>

int main(void)
{
    int matriz[5][5];
    int array[5];

    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            printf("Insira o %d numero da linha %d: ", coluna + 1, linha + 1 );
            scanf(" %d", &matriz[linha][coluna]);
        }
    }
    
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            if (matriz[linha][coluna]%2 == 0)
            {
                array[coluna] = matriz[linha][coluna];
            }
        }
    }

    for (int linha = 0; linha < 5; linha++)
    {
            printf("Os numeros pares da matriz sao:|  %d  |", array[5]);   
    }
}
