#include <stdio.h>

int main(void)
{
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, novo;

    printf("=====\n");

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    printf("=====\n");
    
    for (int linha = 0; linha < 2; linha++)
    {
        if (linha != 1)
        {
            for (int coluna = 0; coluna < 3; coluna++)
            {
                novo = matriz[linha][coluna];
                matriz[linha][coluna] = matriz[2-linha][2-coluna];
                matriz[2-linha][2-coluna] = novo;
            }
        }
        else
        {
            for (int coluna = 0; coluna < 2; coluna++)
            {
                novo = matriz[linha][coluna];
                matriz[linha][coluna] = matriz[2-linha][2-coluna];
                matriz[2-linha][2-coluna] = novo;
            }
        }
        
    }

    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("=====\n");

}