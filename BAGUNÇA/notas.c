#include <stdio.h>
int main(void)
{
    char prova[3][10];
    char respostas[10] = {"abbbdacbac"};
    int pontos = 0;

    for (int aluno = 0; aluno < 3; aluno++)
    {
        for (int materia = 0; materia < 10; materia++)
        {
            printf("\nInsira a resposta %d do aluno %d: ", materia, aluno);
        }
        
    }
    
}