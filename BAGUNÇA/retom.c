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
    int primeiro_array[] = {7, 5};
    int segundo_array[] = {5};
    int soma_um = 0;
    int soma_dois = 0;
    int diferenca_arrays = 0;
    int tamanho_array1;
    int tamanho_array2;

    tamanho_array1 = sizeof(primeiro_array) / sizeof(primeiro_array[0]); 
    tamanho_array2 = sizeof(segundo_array) / sizeof(segundo_array[0]); 

    for (int i = 0; i < tamanho_array1; i++)
    {
        soma_um = soma_um + primeiro_array[i];
    }
    

    for (int i = 0; i < tamanho_array2 ; i++)
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

//================ Exemplo Internet ====================//

// #include <stdio.h>
// #include <string.h>

// char inverte_string(char vetor[]){
//     char vetor_invertido[10], *p;
//     int x, tam = 0;

//     tam = strlen(vetor);
//     p = vetor + tam - 2;

//     for(x = 0; x < tam; x++){
//         vetor_invertido[x] = *p;
//         p--;
//     }

//     for(x = 0; x < tam; x++){
//         printf("%c", vetor_invertido[x]);
//     }

// }

// int main(){
//     char vetor[10];

//     fgets(vetor, 10, stdin);

//     inverte_string(vetor);
// }

//========================================================//

//o primeiro número da matriz são os números de linhas e o segundo é o número de colunas 

