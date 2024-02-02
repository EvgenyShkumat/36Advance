#include <iostream>
#define N 5
using namespace std;

string convert_matrix_to_string(int matrix[N][N]);
void random_matrix_init(int matrix[N][N], int min, int max);

int main() {
	int matrix[N][N];

	random_matrix_init(matrix, 1, 9);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	return 0;
}