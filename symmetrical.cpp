#include <stdio.h>
#include <stdlib.h>

bool symmetrical(float** transposed_matrix, int column,int line)
{
    if (column != line)
    {
        return false;
    }

    for (int i = 0; i < line; i++) 
    {
        for (int j = 0; j < column; j++) 
        {
            if (transposed_matrix[i][j] != transposed_matrix[j][i] && i != j) 
            {
                return false;
            }
        }
    }

    return true;
}