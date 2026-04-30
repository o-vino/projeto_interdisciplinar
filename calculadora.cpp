#include <stdio.h>
#include <locale.h>

float n1 = 0;
float n2 = 0;
float res = 0;

main(){
    setlocale(LC_ALL, "");

    printf("\nInforme o primeiro valor: ");
    scanf("%f", &n1);

    printf("\nInforme o segundo valor: ");
    scanf("%f", &n2);

    res = n1 + n2;

    printf("\nO resultado é: %.2f",res);
}