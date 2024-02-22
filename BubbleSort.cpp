#include "BubbleSort.h"

void BubbleSort(int* ar, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (ar[j] > ar[j + 1])
            {
                // Обмен элементов
                int c = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = c;
            }
        }
    }

}