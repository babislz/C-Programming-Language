#include <stdio.h>

// void somar(int *x, int *y, int *soma)
// {
//     *soma = *y + *x;
// }

// int main()
// {
//     int soma, x, y;

//     printf("Insira o primeiro numero: ");
//     scanf("%d", &x);

//     printf("Insira o segundo numero: ");
//     scanf("%d", &y);

//     somar(&x, &y, &soma);

//     printf("%d", soma);
// }

//=================================================//

// int main(){
//     int arr_valores[5] = {22,33,74,15,2};
//     int *ptr = arr_valores;

//     printf("%d", *(ptr + 4));
// }

//=================================================//

// void arrayy(){
//     int array_valores[4] = {1, 55, 27, 22};
//     int *ptr = array_valores;

//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d ", *(ptr + i));
//     }

// }
// int main(){
//     arrayy();
// }

//=================================================//

// void inverter(){
//     char palavra[7][1] = {"t","e","c","l","a","d","o"};
//     char *ptr = palavra;

//     for (char i = 0; i < 7; i++)
//     {
//         printf("%c", *(ptr + 6 - i));
//     }

// }
// int main(){
//     inverter();
// }

//=================================================//

// void inverter(){
//     char palavra[7][1] = {"t","e","c","l","a","d","o"};
//     char *ptr = palavra;

//     for (char i = 0; i < 7; i++)
//     {

//     }

// }
// int main(){
//     inverter();
// }

//=================================================//

void somar()
{
    int primeiro_array[4] = {2, 7, 22, 8};
    int segundo_array[4] = {48, 21, 34, 12};
    int soma_um = 0;
    int soma_dois = 0;
    int diferenca_arrays = 0;

    for (int i = 0; i < 4; i++)
    {
        soma_um = soma_um + primeiro_array[i];
    }

    for (int i = 0; i < 4; i++)
    {
        soma_dois = soma_dois + segundo_array[i];
    }

    diferenca_arrays = soma_um - soma_dois;

    printf(" A diferenca entre os dois arrays eh: %d", diferenca_arrays);
}

int main()
{
    somar();
}