#include <iostream>
#define N 5
using namespace std;

int find_saddle_elemetns(int matrix[N][N]) {
	int count = 0;

	int min_row_element = 0;
	int min_row_element_index = 0;

	int max_column_element = 0;

	for (int i = 1; i < N; i++){
		for (int j = 0; j < N; j++){
			if (min_row_element > matrix[i][j]) {
				min_row_element = matrix[i][j];
				min_row_element_index = j;
			}
		}

		for (int k = 0; k < N; k++)
		{
			if (matrix[k][min_row_element_index] < matrix[k][i]) {
				max_column_element = matrix[k][i];
			}
		}

		if (max_column_element == min_row_element) {
			count++;
		}
	}

	return count;
}