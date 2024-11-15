#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

//print a 2D array
void print_matrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

//generate a random N x N matrix
void generate_random_matrix(int matrix[N][N]) {
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

//transpose the matrix in place
void transpose_matrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Swap matrix[i][j] with matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() {
    int matrix[N][N];

    //original matrix
    printf("Original Matrix:\n");
    generate_random_matrix(matrix);
    print_matrix(matrix);

    //Transpose the matrix
    transpose_matrix(matrix);

    //Print therotated matrix
    printf("\nRotated Matrix (Transposed):\n");
    print_matrix(matrix);

    return 0;
}
