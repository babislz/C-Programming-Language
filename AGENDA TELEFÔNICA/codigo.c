#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nome[60];
    char email[60];
    long telefone;
}Pessoas;

int main(void)
{   
    Pessoas info;
    FILE * arquivo;
    arquivo = fopen("agenda.txt", "a");
    int op = 5;
    char procurado[60];
    int encontrado = 0;
    
    while (op != 0)
    { 
        fflush(stdin);
        printf("1 - Adicionar novo contato \n2 - Procurar por um contato \n0 - Sair");
        printf("\nInsira o numero da operacao desejada: ");
        scanf(" %d", &op);

            if (op == 1)
            {
                printf("\nInsira o nome da pessoa: ");
                scanf(" %[^\n]", &info.nome);
                
                printf("\nInsira o email: ");
                scanf(" %[^\n]", &info.email);

                printf("\nInsira o numero de telefone: ");
                scanf(" %ld", &info.telefone);
                
                fprintf(arquivo, "Nome: %s Email: %s Telefone: %li\n", info.nome, info.email, info.telefone);
                
                fclose(arquivo);
            }

            if (op == 2)
            {
                fflush(stdin);
                printf("Insira o nome da pessoa procurada: ");
                scanf("%[^\n]s", &procurado);
                
                fclose(arquivo);

                char buffer[1024];
                
                arquivo = fopen("agenda.txt", "r");
                while (fgets(buffer, sizeof(buffer), arquivo) != NULL)
                {
                    sscanf(buffer, "Nome: %s Email: %s Telefone: %ld\n", info.nome, info.email, &info.telefone);
                    printf("%s\n", info.nome);

                    if (strcmp(procurado, info.nome) == 0)
                    {
                        printf("Contato encontrado: \nNome: %s \nEmail: %s \nTelefone: %li", info.nome, info.email, info.telefone);
                        break;
                    }
                }
                fclose(arquivo);
            }
    }
return 0;
}