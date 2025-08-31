#include <stdio.h>
#include <locale.h>

int main (){
float peso, altura, imc;
//AQUI ONDE PEDE AS INFROMAÇÕES
printf("Digite seu peso em KG:");
scanf("%f",&peso);
printf("Digite sua altura: ");
scanf("%f",&altura);

//FORMULA PRA CALCULAR O IMC
imc = peso / (altura * altura);
 
printf("Seu imc e:%3.f\n",imc);

//AQUI ONDE COMEÇA A VALIDAR OS NIVEIS DE IMC 
if (imc < 18.5)
{
    
    printf("Voce esta muito magro");
}
else if (imc >= 18.5 && imc <=24.9)
{
    printf("Seu peso esta normal");
}else if (imc >= 25 && imc <=29.9)
{
    printf("Ta acima do peso");
}
else if (imc >= 30 && imc <=34.9)
{
    printf("Voce esta com obesidade grau 1");
}
else if (imc >= 35 && imc <=39.9)
{
    printf("Voce esta com obesidade grau 2");
}
else
{
    printf("Voce esta com obesidade grau 3 quase virando a thais carla");
}


    return 0;
}