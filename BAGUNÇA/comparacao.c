#include <stdio.h>
int main()
{
    int matriz_um[4][4];
    int matriz_dois[4][4];
    int matriz_tres[4][4];

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("Insira um numero para a linha %i e coluna %i da matriz 1: ", linha, coluna);
            scanf(" %d", &matriz_um[linha][coluna]);
        }
    }

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("Insira um numero para a linha %i e coluna %i da matriz 2: ", linha, coluna);
            scanf(" %d", &matriz_dois[linha][coluna]);
        }
    }

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            if (matriz_um[linha][coluna] > matriz_dois[linha][coluna])
            {
                matriz_tres[linha][coluna] = matriz_um[linha][coluna];
            }
            else
            {
                matriz_tres[linha][coluna] = matriz_dois[linha][coluna];
            }
        }
    }
    
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("%i ", matriz_tres[linha][coluna]);
        }
        printf("\n");
    }
}
