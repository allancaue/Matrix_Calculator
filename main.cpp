#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void transposed();

int main()
{
    setlocale(LC_ALL, "portuguese");
    int option;
    bool repetition = true;

    do
    {
        system("cls");

        printf("===Calculadora de Matriz===\n\n1 - Analisar Matriz\n2 - Sair\n\n");
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
