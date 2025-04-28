#include <stdio.h>

int main()
{
    int array_size = 0, i, j;

    scanf("%d", &array_size);
    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int frequencyArray[7] = {0};

    for (j = 0; j < 7; j++)
    {

        int value = arr[j];

        frequencyArray[value]++;
    }

    for (int k = 0; k < 7; k++)
    {
        /* code */
        printf("%d => %d\n", k, frequencyArray[k]);
    }

    return 0;
}