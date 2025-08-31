#include <stdio.h>
#include <locale.h>
// NÃO ENTENDI COMO FAZ PRA USAR O UTF-8 PORÉM SEI COMO O QUE ESSA BIBLIOTECA FAZ, E NAO SEI ORGANIZAR
int main() {
    float lado1, lado2, lado3;
    //AQUI PEDE PRA DIGITAR OS 3 LADOS
    printf("Digite o primeira lado de um triangulo:");
        scanf("%f",&lado1);
    printf("Digite o segundo lado de um triangulo:");
        scanf("%f",&lado2);
    printf("Digite o terceiro lado de um triangulo");
        scanf("%f",&lado3);
    
        //AQUI VAI VERIFICAR SE O TRIANGULO E VALIDO
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1)
     {

    
        //AQUI VERIFICA SE QUAL CLASSIFICAÇÃO DO TRIANGULO
     }if (lado1 == lado2 && lado2 == lado3)
     {
            printf("Esse e um Triangulo equilatero");
    
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("Esse e um trinagulo isosceles ");
    
        //SE O TRIANGULO FOR NEM EQUILATERO E ISOSCELES AUTOMATICAMENTE SERA ESCALENO
        } else
     
    {
        printf("Esse e um trinagulo escaleno");
    }

    return 0;
}