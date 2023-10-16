#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int elementos = 1;
    int *array = malloc(elementos * sizeof(int));
    
    while (1)
    {
        printf("Insira um numero: ");
        scanf(" %d", &array[elementos-1]);

        if (array[elementos-1] == 0) {
            break;
        }

        elementos ++;
        array = realloc(array, elementos * sizeof(int));


    }


    for (int i = 0; i < elementos; i++){
        printf("%d\n", array[i]);
    }
    

}