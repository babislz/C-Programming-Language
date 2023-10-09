#include <stdio.h>

int main(void)
{
    int posicoes[10] = {2,5,6,10,22,36,25,24,55,33};
    int primeiro_num, segundo_num, op, resultado;

    printf("\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("| %d |", posicoes[i]);
    }

    printf("\n_________________________________________________________");
    printf("\n");
    
    printf("\nInsira a posicao do primeiro numero: ");
    scanf("%d", &primeiro_num);

    printf("\nInsira a posicao do segundo numero: ");
    scanf("%d", &segundo_num);

    printf("\n1 - SOMA \n2 - SUBTRACAO \n3 - DIVISAO \n4 - MULTIPLICACAO");

    printf("\n");

    printf("\nInsira o numero da operacao desejada: ");
    scanf("%d", &op);

    if (op == 1)
    {
        resultado = posicoes[primeiro_num] + posicoes[segundo_num];
        printf("\nO resultado eh %d", resultado);
    }
    
    if (op == 2)
    {
        resultado = posicoes[primeiro_num] - posicoes[segundo_num];
        printf("\nO resultado eh %d", resultado);
    }

    if (op == 3)
    {
        resultado = posicoes[primeiro_num] / posicoes[segundo_num];
        printf("\nO resultado eh %d", resultado);
    }

    if (op == 4)
    {
        resultado = posicoes[primeiro_num] * posicoes[segundo_num];
        printf("\nO resultado eh %d", resultado);
    }

}
