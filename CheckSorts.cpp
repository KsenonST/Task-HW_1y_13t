#include "CheckSorts.h"

int CheckSorts(const int* ar, int size)
{

	bool SortedAscending = true; // флаг для отслеживания сортировки массива по возрастанию
	bool SortedDescending = true; // флаг для отслеживания сортировки массива по убыванию
	int i = 1;


	while (SortedAscending and i < size)
	{
		if (ar[i] >= ar[i - 1])
		{
			i++;
		}
		else
		{
			SortedAscending = false;
			break;

		}
	}

	if (SortedAscending == false)
	{
		i = 1;
		while (SortedDescending and i < size)
		{
			if (ar[i] <= ar[i - 1])
			{
				i++;
			}
			else
			{
				SortedDescending = false;
				break;

			}
		}
	}

	if (SortedAscending)
		return 0;
	else
		if (SortedDescending)
			return 1;
		else
			return -1;

}