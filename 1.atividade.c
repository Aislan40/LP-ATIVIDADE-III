#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int contador = 0;
    char nome[5][200];
    float peso[5];
    int idade[5];
    float altura[5];
    int i, j;
    float maiorPeso = 0;
    float menorPeso = 999;
    float maiorAltura = 0;
    float menorAltura = 999;
    int maiorIdade = 0;
    int menorIdade = 999;

    for (i = 0; i < 5; i++)
    {
        for (i = 0; i < contador; i++){
        printf("Digite o %dº nome: ", i + 1);
        scanf("%s", &nome[contador]);

        fflush(stdin);

        contador++;
        }
        printf("\nDigite seu peso: ");
        scanf("%f", &peso[i]);

        printf("\nDigite sua idade: ");
        scanf("%d", &idade[i]);

        printf("\nDigite sua altura: ");
        scanf("%f", &altura[i]);

        maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

        maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
        menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;

        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;
    }
    printf("A pessoa mais alta é %s com altura de %.2f metros.\n", nome[contador], maiorAltura);
    printf("A pessoa mais baixa é %s com altura de %.2f metros.\n", nome[contador], menorAltura);
    printf("A pessoa com maior peso é %s com peso de %.2f kg.\n", nome[contador], maiorPeso);
    printf("A pessoa com menor peso é %s com peso de %.2f kg.\n", nome[contador], menorPeso);
    printf("A pessoa mais velha é %s com %d anos.\n", nome[contador], maiorIdade);
    printf("A pessoa mais nova é %s com %d anos.\n", nome[contador], menorIdade);

    return 0;
}