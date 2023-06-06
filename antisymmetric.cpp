#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

bool antisymmetric(float** transposed_matrix, int column,int line)
{
    setlocale(LC_ALL, "portuguese");
    if (column != line)
    {
        return false;
    }

    for (int i = 0; i < line; i++) 
    {
        if (transposed_matrix[i][i] != 0) 
        {
            return false;
        }
    }

    for (int i = 0; i < line; i++) 
    {
        for (int j = 0; j < column; j++) 
        {
            if (transposed_matrix[i][j] != -transposed_matrix[j][i]) 
            {
                return false;
            }
        }
    }

    return true;
}
