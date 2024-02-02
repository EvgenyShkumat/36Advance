#include <iostream>
#include <string>
#define N 3

using namespace std;

void random_matrix_init(int matrix[N][N], int min, int max) {
	srand(time(NULL));

	if (min > max) {
		swap(min, max);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[N][N]) {
	string msg = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}