#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int i; 
    int contador = 0;
    char nomes[999][200];
    char numeros[999][200];

    do
    {
        printf("   CODIGO  ||  EXECUCÂO\n");
        printf("     1     ||  ADICIONAR CONTATO\n");
        printf("     2     ||  MOSTRAR NA TELA\n");
        printf("Insira um codigo: ");
        scanf("%d", &opcao);

        fflush(stdin);
        system("cls || clear");

        switch (opcao){
        case 1:
            printf("Digite seu nome:\n ");
            gets(nomes[contador]);

            printf("Digite seu numero:\n ");
            gets(numeros[contador]);

            contador++;

            system("cls || clear");

            break;
        case 2:

            for (i = 0; i < contador; i++)
            {
                printf("Nome: %s\n", nomes[i]);
                printf("Numero: %s\n", numeros[i]);
                printf("\n");
            }

            break;
        default:
            printf("Codigo invalido!\n");
            break;
        }
    } while (opcao  !=  2);

    return 0;
}