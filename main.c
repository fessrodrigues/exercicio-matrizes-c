#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char opcao = "n";
    char matriz[3][3];

    printf("EXERCICIOS DE MATRIZES\n\n");

    while (tolower(opcao) != 's') {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("Elemento [%d][%d]: ", i, j);
                scanf(" %c", &matriz[i][j]);

                while (getchar() != '\n');
            }
        }

        printf("\n\nResultado da Matriz: \n===========================\n\n");

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %c", matriz[i][j], "  ");
            }

            printf("\n");
        }

        printf("\n\nDeseja sair? \nS-Sim ou N-Nao: ");
        scanf(" %c", &opcao);

        if (tolower(opcao) != 's') {
            system("cls");
        }
    }

    return 0;
}
