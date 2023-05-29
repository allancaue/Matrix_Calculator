#include <stdio.h>
#include <stdlib.h>

bool symmetrical(int** transposed_matrix, int column,int line)
{
    if (column != line)
    {
        return false;
    }

    for (int i = 0; i < line; i++) 
    {
        printf("teste");
        for (int j = 0; j < column; j++) 
        {
            printf("teste2");
            if (transposed_matrix[i][j] != transposed_matrix[j][i] && i != j) 
            {
                return false;
            }
        }
    }

    return true;
}