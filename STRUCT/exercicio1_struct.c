#include <stdio.h>

typedef struct
{
    int hora;
    int minutos;
    int segundos;
}Horario;

typedef struct 
{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct 
{
    Data;
    Horario;
    char descricao[500];
}Compromisso;


int main(void)
{
    Horario relogio;
    Data calendario;
    Compromisso evento;

    printf("Escreva o dia: ");
    scanf(" %d", &evento.dia);

    printf("Escreva o mes: ");
    scanf(" %d", &evento.mes);

    printf("Escreva o ano: ");
    scanf(" %d", &evento.ano);

    printf("Escreva a hora: ");
    scanf(" %d", &evento.hora);

    printf("Escreva o minuto: ");
    scanf(" %d", &evento.minutos);

    printf("Escreva o segundo: ");
    scanf(" %d", &evento.segundos);

    printf("Escreva uma descricao: ");
    scanf(" %[^\n]", &evento.descricao);

    printf("O evento irah ocorrer no dia %d/%d/%d, as %d:%d:%d \nDescricao: %s.", evento.dia, evento.mes, evento.ano, evento.hora, evento.minutos, evento.segundos, evento.descricao);

    return 0;
}




