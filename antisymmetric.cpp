#include <stdio.h>
#include <stdlib.h>

bool antisymmetric(int total, int** transposed_matrix)
{
    for (int i = 0; i < total; i++) {
        if (transposed_matrix[i][i] != 0) {
            return false;
        }
    }

    for (int i = 0; i < total; i++) {
        for (int j = i + 1; j < total; j++) {
            if (transposed_matrix[i][j] != -transposed_matrix[j][i]) {
                return false;
            }
        }
    }

    return true;
}
