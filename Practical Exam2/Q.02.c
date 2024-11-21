#include <stdio.h>

int main() {
    int rows = 3, cols = 3; 
    int i;
    int matrix[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

   
    int max = matrix[0];

   
     for (i = 1; i < rows * cols; i++) {
        if (matrix[i] > max) {
            max = matrix[i];
        }
    }
    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
}

