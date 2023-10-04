#include <stdio.h>

int main(void)
{
    char matriz[5][10];
    char array[10] = {"aabaccdcba"};
    char resultado [10];
    int pontuacao = 0;
    
    for (int aluno = 0; aluno < 5; aluno++)
    {
        for (int resposta = 0; resposta < 10; resposta++)
        {
            printf("Digite a resposta da questao %i do aluno %i: ", resposta + 1, aluno + 1);
            scanf(" %c", &matriz[aluno][resposta]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        pontuacao = 0;
        for (int coluna = 0; coluna < 10; coluna++)
        {
            if (matriz[i][coluna] == array[coluna])
            {
                pontuacao += 1;
            }
        }
        resultado[i] = pontuacao;
    }
  
    for (int i = 0; i < 5; i++)
    {
        printf("\nA nota do aluno %d foi %d pontos.\n", i, resultado[i]);
    }
}