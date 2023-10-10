#include <stdio.h>

typedef struct 
{
    int matricula;
    char nome [60];
    float nota1, nota2, nota3;
}Alunos;

int main(void)
{
    
    Alunos aluno[5];
    
    float maior_nota = 0, maior_media = 0, menor_media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", &aluno[i].nome);

        printf("Insira a matricula do aluno %d: ", i + 1);
        scanf(" %d", &aluno[i].matricula);

        printf("Insira a primeira nota do aluno %d: ", i + 1);
        scanf(" %f", &aluno[i].nota1);

        printf("Insira a segunda nota do aluno %d: ", i + 1);
        scanf(" %f", &aluno[i].nota2);

        printf("Insira a treceira nota do aluno %d: ", i + 1);
        scanf(" %f", &aluno[i].nota3);
    }
    
    for (int i = 0; i < 5; i++)
    {
        
    }
    
}
