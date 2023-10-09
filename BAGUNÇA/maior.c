#include <stdio.h>
int main()
{
    int arr[5] = {10, 99, 37, 4, 54};
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > maior)
        {
            maior = arr[i];
        }
    }

    printf("%d", maior);

    return 0;
}
