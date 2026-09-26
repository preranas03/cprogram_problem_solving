#include<stdio.h>
#define N 3

void rotate(int matrix[N][N]) {

    // Step 1: Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < N; i++) {

        int left = 0;
        int right = N - 1;

        while (left < right) {

            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;

            left++;
            right--;
        }
    }
}

int main() {

    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    printf("Rotated Matrix:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*int main()
{
    int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int j=0;j<3;j++){

     for(int i=2;i>=0;i--)
        printf("%d ",matrix[i][j]);
    printf("\n");
    }
    return 0;
}*/