#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam = 5;

    int * valores = malloc(sizeof(int) * tam);

    for (int i = 0; i < tam; i++){
        scanf("%i", (valores + i));
    }

    for(int i  =0; i < tam; i ++){
        printf("%i\n", valores[i]);
    }

    free(valores);
    return 0;
}