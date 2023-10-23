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
    Data data;
    Horario horario;
    char descricao[500];
}Compromisso;



void mada(Compromisso * misso) {
    misso->data
}


int main(void)
{
    Compromisso evento;

    mada(&evento);

    printf("Escreva o dia: ");
    scanf(" %d", &evento.data.dia);

    printf("Escreva o mes: ");
    scanf(" %d", &evento.data.mes); 

    printf("Escreva o ano: ");
    scanf(" %d", &evento.data.ano);

    printf("Escreva a hora: ");
    scanf(" %d", &evento.horario.hora);

    printf("Escreva o minuto: ");
    scanf(" %d", &evento.horario.minutos);

    printf("Escreva o segundo: ");
    scanf(" %d", &evento.horario.segundos);

    printf("Escreva uma descricao: ");
    scanf(" %[^\n]", &evento.descricao);

    printf("O evento irah ocorrer no dia %d/%d/%d, as %d:%d:%d \nDescricao: %s.", evento.data.dia, evento.data.mes, evento.data.ano, evento.horario.hora, evento.horario.minutos, evento.horario.segundos, evento.descricao);

    return 0;
}




