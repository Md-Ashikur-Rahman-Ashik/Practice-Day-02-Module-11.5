#include <stdio.h>

int main()
{
    int array_size, i;

    scanf("%d", &array_size);
    int arr[array_size];

    for (int i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int countFrequencyZero = 0;
    int countFrequencyOne = 0;
    int countFrequencyTwo = 0;
    int countFrequencyThree = 0;
    int countFrequencyFour = 0;
    int countFrequencyFive = 0;
    int countFrequencySix = 0;
    int countFrequencySeven = 0;
    int countFrequencyEight = 0;
    int countFrequencyNine = 0;

    for (i = 0; i < array_size; i++)
    {
        /* code */
        if (arr[i] == 0)
        {
            /* code */
            countFrequencyZero++;
        }
        else if (arr[i] == 1)
        {
            countFrequencyOne++;
        }
        else if (arr[i] == 2)
        {
            countFrequencyTwo++;
        }
        else if (arr[i] == 3)
        {
            countFrequencyThree++;
        }
        else if (arr[i] == 4)
        {
            countFrequencyFour++;
        }
        else if (arr[i] == 5)
        {
            countFrequencyFive++;
        }
        else if (arr[i] == 6)
        {
            countFrequencySix++;
        }
        else if (arr[i] == 7)
        {
            countFrequencySeven++;
        }
        else if (arr[i] == 8)
        {
            countFrequencyEight++;
        }
        else if (arr[i] == 9)
        {
            countFrequencyNine++;
        }
    }

    printf("0 => %d\n", countFrequencyZero);
    printf("1 => %d\n", countFrequencyOne);
    printf("2 => %d\n", countFrequencyTwo);
    printf("3 => %d\n", countFrequencyThree);
    printf("4 => %d\n", countFrequencyFour);
    printf("5 => %d\n", countFrequencyFive);
    printf("6 => %d\n", countFrequencySix);
    printf("7 => %d\n", countFrequencySeven);
    printf("8 => %d\n", countFrequencyEight);
    printf("9 => %d", countFrequencyNine);

    return 0;
}