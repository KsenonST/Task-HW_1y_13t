#include "ShellSort.h"

void ShellSort(int *arr, int n) {
    // �������� � �������� ���������, ����� ��������� ���
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // ��������� ���������� ��������� ��� ����������� � ���������� gap
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            // �������� �������� �������, ���� �� ����� ���������� ����� ��� �������� ��������
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

