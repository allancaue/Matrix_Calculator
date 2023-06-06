#include <stdio.h>
#include <stdlib.h>

void image(int line ,int column ,float headquarters[100][100], int list_headquarters[100][100]);
float** answer_image(int line,int column, float headquarters[100][100], float main_line[100]);
bool symmetrical(float** transposed_matrix, int column,int line);
bool antisymmetric(float** transposed_matrix, int column,int line);

void transposed()
{
    float headquarters[100][100],main_line[100];
    int column,line,total,list_headquarters[100][100];
    float value_to_be_placed;
    int list[10000],z = 0, position;
    bool true_headquarters[100][100];
    list[0] = 0;

    printf("Imforme a quantidade de linhas e de coluna: ");
    scanf("%d %d", &line, &column);

    for (int i = 0; i < 10000; i++)
    {
        list[i] = i;
    }

    for (int i = 0; i < line; i++)
    {
        for (int l = 0; l < column; l++)
        {
            list_headquarters[i][l] = list[z];
            headquarters[i][l] = 0;
            z++;
            true_headquarters[i][l] = false;
        }
        
    }

    total = column*line;

    for (int k = 0; k < total; k++)
    {
        z = 0;
        int aux = 0;
        system("cls");

        image(line,column,headquarters,list_headquarters);

        printf("Escolha a posisao que vs quer auterar: ");
        scanf("%d",&position);
        printf("\n\n"); 

        for (int i = 0; i < line; i++)
        {
            for(int l = 0; l < column; l++)
            {
                // system("pause");
                if(position == z && true_headquarters[i][l] == false)
                {
                    printf("escolha o valor a ser colocado: ");
                    scanf("%f", &value_to_be_placed);

                    if(i == l)
                    {
                        main_line[i] = value_to_be_placed;
                    }

                    headquarters[i][l] = value_to_be_placed;
                    true_headquarters[i][l] = true;
                    aux = 1;
                }
                z++;
            }
        }
        if(aux == 0)
        {
            printf("ERRO");
            k--;
            system("pause");
        }
    }

   system("cls");

    printf("A matriz transposta e:\n\n");

    float** transposed_matrix = answer_image(line, column, headquarters, main_line);

    printf("\n\n");

    if (symmetrical(transposed_matrix, column, line) == true)
    {
        printf("A matriz e simetrica\n\n");
    }
    else
    {
        printf("A matriz neo e simetrica\n\n");
    }

    if (antisymmetric(transposed_matrix, column, line) == true)
    {
        printf("A matriz e antisimetrica\n\n");
    }
    else
    {
        printf("A matriz neo é antisimetrica\n\n");
    }

    return;
}