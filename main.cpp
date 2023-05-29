#include <stdio.h>
#include <stdlib.h>

void transposed();

int main()
{
    int option;
    bool repetition = true;

    do
    {
        system("cls");

        printf("===Cauculadora de Matriz===\n\n1 - Analisar Matriz\n2 - Sair\n\n");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            transposed();
            system("pause");
            break;
        case 2:
            repetition = false;
            break;
        
        default:
            printf("ERRO\n");
            system("pause");
            break;
        }
    } while (repetition == true);
    
    return 0;
}
