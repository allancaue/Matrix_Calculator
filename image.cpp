#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void image(int line ,int column ,float headquarters[100][100],int list_headquarters[100][100])
{
    setlocale(LC_ALL, "portuguese");
    for (int i = 0; i < line; i++)
    {
        printf("|");
        for (int l = 0; l < column; l++)
        {
            printf(" %d ",list_headquarters[i][l]);
            if(list_headquarters[i][l] < 10)
            {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
    }

    printf("_____________________________\n\n");

    for (int i = 0; i < line; i++)
    {
        printf("|");
        for (int l = 0; l < column; l++)
        {
            printf(" %f ",headquarters[i][l]);
            if(headquarters[i][l] < 10)
            {
                printf(" ");
            }
        }
        printf("|");
        printf("\n");
    }

    return;
}