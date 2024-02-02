#include <iostream>
#define N 3
using namespace std;

string convert_matrix_to_string(int matrix[N][N]);
void random_matrix_init(int matrix[N][N], int min, int max);

int find_saddle_elements(int matrix[N][N]);

int main() {
	int matrix[N][N];

	random_matrix_init(matrix, 1, 9);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	cout << "The amount of saddle elemnts is " << find_saddle_elements(matrix);

	return 0;
}