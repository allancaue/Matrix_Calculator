#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float** answer_image(int line, int column, float headquarters[100][100], float main_line[100])
{
    setlocale(LC_ALL, "portuguese");
    int x = 0, y = 0;

    float** transposed_matrix = (float**)malloc(column * sizeof(float*));
    for (int i = 0; i < column; i++) {
        transposed_matrix[i] = (float*)malloc(line * sizeof(float));
    }

    if (line == column) {
        for (int i = 0; i < line; i++) {
            for (int j = 0; j < column; j++) {
                transposed_matrix[j][i] = headquarters[i][j];
            }
        }
    } else {
        for (int i = 0; i < line; i++) {
            for (int j = 0; j < column; j++) {
                if (i == j) {
                    transposed_matrix[j][i] = main_line[i];
                } else {
                    transposed_matrix[j][i] = 0.0;
                }
            }
        }
    }

    for (int i = 0; i < column; i++) {
        printf("|");
        for (int j = 0; j < line; j++) {
            printf(" %f ", transposed_matrix[i][j]);
            if (transposed_matrix[i][j] < 10) {
                printf(" ");
            }
        }
        printf("|\n");
    }

    return transposed_matrix;
}
