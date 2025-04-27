#include <stdio.h>

int main()
{
    int array_size;

    scanf("%d", &array_size);
    int arr[array_size];

    for (int i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int countFrequency = 0;

    for (int i = 0; i < array_size; i++)
    {
        /* code */
        if (arr[i] == 0)
        {
            countFrequency++;
        }
    }

    printf("The count of zero is %d", countFrequency);

    return 0;
}