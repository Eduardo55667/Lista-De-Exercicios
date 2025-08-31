#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    int numero_secreto, palpite;  

    // gerando um numero entre 1 e 100
    numero_secreto = rand() % 100 + 1;

    printf("Adivinhe um numero entre 1 e 100: ");
    scanf ("%d",&palpite);

    if (palpite == numero_secreto)
    {
        printf("Voce acertou!");
    }
    else if (palpite > numero_secreto)
    {
        printf("Passou longe amigo");
    }
    else
    {
        printf("Numero muito baixo amigo");
    }
    
    return 0;
}