#include "Header.h"

int** createArray(int m, int m) {
	int** array = new int* [m];
	for (int i = 0; i < m; i++)
	{
		array[i] = new int[n];
	}
	return array;
}

int delArray(int** array, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		
		
		//delete[] array[n];
	}
	delete[]array;
}

//
void printArray(int** array, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << array
		}

	}
}

void pushRandomNumber


void checkArray(int** array, int m, int n) {
	int sum = 0;
	int maxsum = 0;
	int indexmaxsum = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += array[i][j]:
		}
	}
}