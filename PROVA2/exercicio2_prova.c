#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int maximo = 4;
    int *alocar = malloc( maximo * sizeof(int));
    int op = 3;
    
    for (int i = 0; i < maximo; i++)
    {
        printf("Insira o valor %d: ", i + 1);
        scanf(" %d", &alocar[i]);
    }
    
    while (op != 2)
    {
        printf("Voce deseja adicionar mais valores? Digite 1 para 'sim' ou 2 para 'nao': ");
        scanf(" %d", &op);

        if (op = 1)
        {
            printf("Quantos valores voce deseja inserir?: ");
            scanf(" %d", &maximo);
            alocar = realloc(alocar, maximo * sizeof(int));
            
            for (int i = 0; i < maximo; i++)
            {
                printf("Insira o valor %d: ", i + 1);
                scanf(" %d", &alocar[i]);
            }
        }
        
    } 

    for (int i = 0; i < maximo; i++)
    {
        printf("\n%d", alocar[i]);
    }
    
    free(alocar);
}
    
    