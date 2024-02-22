#include "ShellSort.h"

void ShellSort(int *arr, int n) {
    // Начинаем с большого интервала, затем уменьшаем его
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Применяем сортировку вставками для подмассивов с интервалом gap
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            // Сдвигаем элементы массива, пока не найдём правильное место для текущего элемента
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

