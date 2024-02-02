#include <iostream>
#define N 3
using namespace std;

int find_saddle_elements(int matrix[N][N]) {
	int count = 0;

	for (int i = 0; i < N; i++){
		int min_row_element = 10;
		int min_row_element_index = 0;

		for (int j = 0; j < N; j++){
			if (min_row_element > matrix[i][j]) {
				min_row_element = matrix[i][j];
				min_row_element_index = j;
			}
		}

		int max_column_element = matrix[0][min_row_element_index];

		for (int k = 1; k < N; k++)
		{
			if (max_column_element < matrix[k][min_row_element_index]) {
				max_column_element = matrix[k][min_row_element_index];
			}
		}

		if (max_column_element <= min_row_element) {
			count++;
		}
	}

	return count;
}