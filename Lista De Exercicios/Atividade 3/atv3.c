#include <stdio.h>
#include <locale.h>

int main (){
    int valor,not100,not50,not20,not10,not5,not2;
    //Solicitar o valor de saque
    printf("Qual Valor sera sacado: ");
    scanf("%d",&valor);

    //Aqui calcula quantas celulas serão entregues
    not100 = valor / 100;
    valor = valor % 100;

    not50 = valor / 50;
    valor = valor % 50;

    not20 = valor / 20;
    valor = valor % 20;

    not10 = valor / 10;
    valor = valor % 10;
     //Verificação do valor e caso o valor seja invalido o programa vai ser encerrado
    if (valor == 3 || valor == 1 || valor == 0)
    {
        printf("Erro o valor nao pode ser sacado.\n");
        return 0;
    }
    // Aqui decide se usa 1 nota de 5 ou mais de 1 nota de 2
    if (valor % 2 == 0) {
        not5 = 0;
        not2 = valor / 2;
        valor = 0;
    } else {
        not5 = 1;
        not2 = (valor - 5) / 2;
        valor = 0;
    }

    //Aqui vai começar a verificar a quantidade de cedulas
    //Vou usar apenas IF pois if e else if vai verificar apenas se uma das condições é verdadeira ou seja em caso de pedir um valor por exemplo 250 ele so mostraria as de 100 e ignoraria as de 50
     if (not100 > 0)
     {
            printf("%d de 100\n", not100);
     }
     if (not50 > 0)
     {
            printf("%d de 50\n", not50);
     }
     if (not20 > 0)
     {
            printf("%d de 20\n", not20);
     }
     if (not10 > 0)
     {
            printf("%d de 10\n", not10);
     }
     if (not5 > 0)
     {
            printf("%d de 5\n", not5);
     }
     if (not2 > 0)
     {
            printf("%d de 2\n", not2);
     }
     

    return 0;
}