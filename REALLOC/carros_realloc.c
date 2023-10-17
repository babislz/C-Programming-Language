#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char modelo [60];
    char fabricante [60];
    char cor [60];
    int ano;
    float valor;

}Carros;

int main(void)
{
    FILE * arquivo;
    //  //LER
    int tamanho = 1;
    Carros *veiculos = malloc(tamanho * sizeof(Carros));
    int escolha = 3;

    printf("\n");

    while (escolha != 0)
    {
        printf("\n1 - Adicionar novo veiculo \n2 - Ver lista de veiculos \n0 - Sair");
        
        printf("\n===============================================");

        printf("\nInsira o numero da operacao desejada: ");
        scanf(" %d", &escolha);

        if (escolha == 1)
        {
            printf("Quantos veiculos deseja cadastrar? ");
            scanf(" %d", &tamanho);

            veiculos = realloc(veiculos, tamanho * sizeof(Carros));

            arquivo = fopen("carrinho.txt", "a");
            
            for (int i = 0; i < tamanho; i++)
            {
                fflush(stdin);
                
                printf("\nInsira o modelo do %d veiculo: ", i + 1);
                scanf(" %[^\n]s", veiculos[i].modelo);

                printf("\nInsira o fabricante do %d veiculo: ", i + 1);
                scanf(" %[^\n]s", veiculos[i].fabricante);

                printf("\nInsira a cor do %d veiculo: ", i + 1);
                scanf(" %[^\n]s", veiculos[i].cor);

                printf("\nInsira o ano do %d veiculo: ", i + 1);
                scanf(" %d", &veiculos[i].ano);

                printf("\nInsira o valor do %d veiculo: ", i + 1);
                scanf(" %f", &veiculos[i].valor);

                fprintf(arquivo, "\n\n===============================================");

                fprintf(arquivo, "\nModelo: %s \nFabricante: %s \nCor: %s \nAno: %d \nValor: %2.f", veiculos[i].modelo, veiculos[i].fabricante, veiculos[i].cor, veiculos[i].ano, veiculos[i].valor);
            
                fprintf(arquivo, "\n\n===============================================");
            }
            
            fclose(arquivo);
        }

        if (escolha == 2)
        {
            arquivo = fopen("carrinho.txt", "r");
            
            char temporario; 
            
            while ((temporario = getc(arquivo))!=EOF)
            {
                printf("%c", temporario);
            }    
            
            fclose(arquivo);
        }
    }
}