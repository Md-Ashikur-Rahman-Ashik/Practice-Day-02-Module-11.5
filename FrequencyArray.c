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

    int frequencyArray[6] = {0};

    for (j = 0; j < array_size; j++)
    {
        /* code */
        if (arr[j] == 0)
        {
            /* code */
            frequencyArray[0]++;
        }
        else if (arr[j] == 1)
        {
            frequencyArray[1]++;
        }
        else if (arr[j] == 2)
        {
            frequencyArray[2]++;
        }
        else if (arr[j] == 3)
        {
            frequencyArray[3]++;
        }
        else if (arr[j] == 4)
        {
            frequencyArray[4]++;
        }
        else if (arr[j] == 5)
        {
            frequencyArray[5]++;
        }
        else if (arr[j] == 6)
        {
            frequencyArray[6]++;
        }
        else if (arr[j] == 7)
        {
            frequencyArray[7]++;
        }
        else if (arr[j] == 8)
        {
            frequencyArray[8]++;
        }
        else if (arr[j] == 9)
        {
            frequencyArray[9]++;
        }
    }

    for (int k = 0; k < array_size; k++)
    {
        /* code */
        printf("%d => %d\n", k, frequencyArray[k]);
    }

    return 0;
}