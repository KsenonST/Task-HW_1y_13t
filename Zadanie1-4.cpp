#include <iostream>
#include "CheckSorts.h"
#include "QuickSort_error_fixed.h"
#include "work_array.h"
#include "merge.h"
#include "BubbleSort.h"
#include "ShellSort.h"

using namespace std;

int main()
{	
	// Zadanie_1
	cout << endl << "#Zadanie_1" << endl;

	const int razmer = 10;
	const int massiv1[razmer] = { 1, 2, 3, 4, 7, 19, 20, 29, 30, 30 };
	const int massiv2[razmer] = { 100, 99, 94, 64, 45, 40, 39, 39, 25, 20 };
	const int massiv3[razmer] = { -2, 34, 25, 64, 40, 23, 102, 33, 18, 90 };

	cout << endl << "massiv: ";

	for (int i = 0; i < razmer; i++)
	{
		cout << massiv1[i] << " ";
	}
	cout << endl;
	cout << "result: " << CheckSorts(massiv1, razmer) << endl;
	cout << endl << endl;

	cout << "massiv: ";

	for (int i = 0; i < razmer; i++)
	{
		cout << massiv2[i] << " ";
	}
	cout << endl;
	cout << "result: " << CheckSorts(massiv2, razmer) << endl;
	cout << endl << endl;


	cout << "massiv: ";

	for (int i = 0; i < razmer; i++)
	{
		cout << massiv3[i] << " ";
	}
	cout << endl;
	cout << "result: " << CheckSorts(massiv3, razmer) << endl;
	cout << endl << endl;

	// Zadanie_2
	cout << "#Zadanie_2" << endl << endl;

	const int size4 = 7;
	int massiv4[size4] = { 14, 3, 19, 0, -2, 24, 5 };
	cout << "Input massiv: ";
	ShowAr(massiv4, size4, ' ');
	QuickSort_error_fixed(massiv4, size4);
	cout << endl << "Output massiv: ";
	ShowAr(massiv4, size4, ' ');
	cout << endl << endl << endl;

	// Zadanie_3
	cout << "#Zadanie_3" << endl;

	const int N = 10;
	int M = N / 2;

	int massiv5[N] = { 1, 2, 3, 6, 10, 0, 4, 5, 7, 9 };

	cout << endl << "Input massiv: ";

	for (int i = 0; i < N; i++)
	{
		cout << massiv5[i] << " ";
	}


	merge(massiv5, N, M);

	cout << endl << endl;

	cout << "Output massiv: ";

	for (int i = 0; i < N; i++)
	{
		cout << massiv5[i] << " ";
	}

	cout << endl << endl << endl;

	//Zadanie_4

	cout << "#Zadanie_4" << endl;


	const int razmer6 = 10;

	int massiv6[razmer6] = { 9, -2, 4, 8, 1, 7, 14, 3, 12, 11 };
	int massiv7[razmer6] = { 19, -20, 0, 14, -35, 12, 95, 77, 12, 10 };

	cout << endl << "input massiv: ";
	for (int i = 0; i < razmer6; i++)
	{
		cout << massiv6[i] << " ";
	}

	cout << endl << endl;
	ShellSort(massiv6, razmer6);

	cout << "ShellSorted massiv: ";
	for (int i = 0; i < razmer6; i++)
	{
		cout << massiv6[i] << " ";
	}

	cout << endl << endl;




	cout << "input massiv: ";
	for (int i = 0; i < razmer6; i++)
	{
		cout << massiv7[i] << " ";
	}

	cout << endl << endl;
	BubbleSort(massiv7, razmer6);

	cout << "BubbleSorted massiv: ";
	for (int i = 0; i < razmer6; i++)
	{
		cout << massiv7[i] << " ";
	}

	cout << endl << endl;
	getchar();
}

