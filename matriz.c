#include <stdio.h>
    
    int main(void){
    
    int linha;
    int coluna;
    int maior = 0;
    int maior_linha;
    int maior_coluna;


    printf("Linhas: ");
    scanf("%d", &linha);
    printf("Colunas: ");
    scanf("%d", &coluna);

    int mato[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf(" %d", &mato[i][j]);
            if (mato[i][j] > maior)
            {
                maior = mato[i][j];
                maior_linha = i;
                maior_coluna = j;
            }
            
        }
    }

    printf("Matrix lida:\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf(" %d", mato[i][j]);
        }

        printf("\n");
    }
    printf("Maior Numero: %d\n", maior);
    printf("Linha: %d\n", maior_linha);
    printf("Coluna: %d\n", maior_coluna);
}
            
    