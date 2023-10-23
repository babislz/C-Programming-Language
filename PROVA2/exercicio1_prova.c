#include <stdio.h>


typedef struct 
{
    int tamanho[60];
    int plano[60];
}Veiculo;

typedef struct 
{
    char nome[100];
    Veiculo veiculo;

}Cliente;

int main(void)
{
    Cliente clientes;
    FILE *arquivo;
    arquivo = fopen("clientes.txt", "a");
    int op = 4;
    int op2 = 5;
    float diaria_pequeno = 40.00;
    float diaria_medio = 50.00;
    float diaria_grande = 100.00;
    float mensal_pequeno = 400.00;
    float mensal_medio = 800.00;
    float mensal_grande = 1200.00;


    printf("CONSULTA");
    
    printf("1 - Adicionar clientes \n2 - Consultar valores \n3 - Verificar clientes");
    printf("\n Insira o numero da operacao desejada: ");
    scanf(" %d", &op);
    
    if (op = 1)
    {
        printf("\nInsira o nome do cliente: ");
        scanf(" %[^\n]s", &clientes.nome);

        printf("\n1 - Diarista \n2 - Mensalista \n\n> ");
        scanf(" %d", &clientes.veiculo.plano);
        
        printf("\nTAMANHO DO VEICULO \n1 - Pequeno \n2 - Medio \n3 - Grande \n\n>");
        scanf(" %d", &clientes.veiculo.tamanho);

        if (clientes.veiculo.plano == 1 && clientes.veiculo.tamanho == 1)
        {
            fprintf(arquivo, "Cliente: %s Plano: Diarista  Tamanho: Pequeno Valor: %2.f\n", clientes.nome, diaria_pequeno);
            fclose(arquivo);
        }

        if (clientes.veiculo.plano == 1 && clientes.veiculo.tamanho == 2)
        {
            fprintf(arquivo, "Cliente: %s Plano: Diarista  Tamanho: Medio Valor: %2.f\n", clientes.nome, diaria_medio);
            fclose(arquivo);
        }

        if (clientes.veiculo.plano == 1 && clientes.veiculo.tamanho == 3)
        {
            fprintf(arquivo, "Cliente: %s Plano: Diarista  Tamanho: Grande Pequeno Valor: %2.f\n", clientes.nome, diaria_grande);
            fclose(arquivo);
        }

        if (clientes.veiculo.plano == 2 && clientes.veiculo.tamanho == 1)
        {
            fprintf(arquivo, "Cliente: %s Plano: Mensalista  Tamanho: Pequeno Valor: %2.f\n", clientes.nome, mensal_pequeno);
            fclose(arquivo);
        }
        
        if (clientes.veiculo.plano == 2 && clientes.veiculo.tamanho == 2)
        {
            fprintf(arquivo, "Cliente: %s Plano: Mensalista  Tamanho: Medio Valor: %2.f\n", clientes.nome, mensal_medio);
            fclose(arquivo);
        }
        if (clientes.veiculo.plano == 2 && clientes.veiculo.tamanho == 3)
        {
            fprintf(arquivo, "Cliente: %s Plano: Mensalista  Tamanho: Grande Valor: %2.f\n", clientes.nome, mensal_grande);
            fclose(arquivo);
        }
    }
    
}