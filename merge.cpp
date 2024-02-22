#include <iostream>

using namespace std;

void merge(int* ar, int total_size, int left_size)
{
	int* p_massiv_m = new int[left_size];
	int* p_massiv_n = new int[total_size - left_size];

	for (int i = 0; i < left_size; i++)
	{
		p_massiv_m[i] = ar[i];
	}

	int j = 0;
	for (int i = left_size; i < total_size; i++)
	{
		p_massiv_n[j] = ar[i];
		j++;

	}

	  
	int i = 0;
	j = 0;
	int k = 0;

	while (i < left_size && j < total_size - left_size) 
	{	if  ((i == left_size - 1) and (j == (total_size - left_size - 1)))
			{
				if (p_massiv_m[i] <= p_massiv_n[j]) 
				{
					ar[k] = p_massiv_m[i];
					ar[k + 1] = p_massiv_n[i];
					i++;
				}
				else 
					{
						ar[k] = p_massiv_n[j];
						ar[k + 1] = p_massiv_m[j];
						j++;
					}

			}
		else 
			{
				if (p_massiv_m[i] <= p_massiv_n[j]) 
				{
					ar[k] = p_massiv_m[i];
					i++;
				}
				else 
				{
					ar[k] = p_massiv_n[j];
					j++;
				}
			}	
		k++;
	}
	
	delete[] p_massiv_m;
	delete[] p_massiv_n;
	
	return;
}