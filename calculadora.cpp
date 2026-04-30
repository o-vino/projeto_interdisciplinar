#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int escolha = 0;
float n1 = 0;
float n2 = 0;
float res = 0;

int oper = 0;

main(){
do{    
    setlocale(LC_ALL, "");

    oper = 0;

    printf("\nInforme o primeiro valor: ");
    scanf("%f", &n1);

    printf("\nInforme o segundo valor: ");
    scanf("%f", &n2);

    do{
    printf("\nInforme qual a operação que desejas fazer:\n soma          = 1\n subtração     = 2\n multiplicação = 3\n divisão       = 4\n");
    scanf("%d", &oper);
        if(oper < 1 || oper > 4){
            printf("Informe uma operação válida! ");
        }
    }while(oper < 1 || oper > 4);

    //if-else em cadeia para seleção de operações

    if(oper == 1){
        res = n1 + n2;
    }else
    if(oper == 2){
        res = n1 - n2;
    }else
    if(oper == 3){
        res = n1 * n2;
    }else
    if(oper == 4){
        res = n1 / n2;
    }

    printf("\nO resultado é: %.2f",res);

printf("\nDeseja fazer outro cálculo? \n Sim = 1 \n Não = 0\n");
scanf("%d", &escolha);
system("clear");
}while(escolha != 0);
}