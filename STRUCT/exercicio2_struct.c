#include <stdio.h>

typedef struct 
{
    char nome[60];
    char curso[50];
    int matricula;

} Alunos;

int main(void)
{
    Alunos cadastro[5];

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nInsira o nome do %d aluno: ", i + 1);
        scanf(" %[^\n]", &cadastro[i].nome);

        printf("\nInsira o curso do %d aluno: ", i + 1);
        scanf(" %[^\n]", &cadastro[i].curso);

        printf("\nInsira o numero da matricula do %d aluno: ", i + 1);
        scanf(" %d", &cadastro[i].matricula);
    }
    
    printf("\n=============================================================================");

    for (int i = 0; i < 5; i++)
    {
        printf("\nO(a)(e) aluno(a)(e) %s, portador da matricula de numero %d, estah cursando %s", cadastro[i].nome, cadastro[i].matricula, cadastro[i].curso);
    }

    printf("\n=============================================================================");

    printf("\n");

    return 0;
}