#include "work_array.h"

void QuickSort_error_fixed(int* ar, int size)

{ 
	int left = 0;
	int right = size - 1;
	int pivot = ar[size / 2];
	while (left <= right)
	{
		while (ar[left] < pivot)
		{
			left++;
		}

		while (ar[right] > pivot)
		{
			right--;
		}

		if (left <= right)
		{
			Swap(&ar[left], &ar[right]); 
			left++;
			right--;

		}

	}
		if (right > 0)
			{

			QuickSort_error_fixed(&ar[0], right + 1);
			}
		if (left < size)
			{
			QuickSort_error_fixed(&ar[left], size - left);
			}

}

