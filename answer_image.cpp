#include <stdio.h>
#include <stdlib.h>

int** answer_image(int line,int column, int headquarters[100][100], int main_line[100])
{
    int y = 0, x = 0;

    int** transposed_matrix = (int**)malloc(line * sizeof(int*));
    for (int i = 0; i < line; i++) {
        transposed_matrix[i] = (int*)malloc(column * sizeof(int));
    }

    for (int i = (line - 1); i >= 0; i--)
    {
        y = 0;
        for (int l = (column - 1); l >= 0; l--)
        {
            transposed_matrix[x][y] = headquarters[i][l];
            y++;
        }
        x++;
    }

    for (int i = 0; i < line; i++)
    {
        for (int l = 0; l < column; l++)
        {
            if (i == l)
            {
                transposed_matrix[i][l] = main_line[i];
            }
        }
    }

    for (int i = 0; i < line; i++)
    {
        printf("|");
        for (int l = 0; l < column; l++)
        {
            printf(" %d ",transposed_matrix[i][l]);
            if(transposed_matrix[i][l] < 10)
            {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
    }

    return transposed_matrix;
}

    
    