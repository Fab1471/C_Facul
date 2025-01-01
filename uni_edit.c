#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    
    int idade = 0;

    setlocale(LC_ALL,"");
    
    printf("Olá, mundo!\n");

    printf("Digite a sua idade\n");
    scanf("%d", &idade);

    printf("A idade digitada foi %d\n", idade);

    if(idade >=18 && idade <25) {
        printf("Você é maior de idade, mas tem menos que 25 anos\n");
    } else {
        if (idade >= 25) {
        printf("Você tem mais que 25\n");
        } else {
        printf("Você é menor de idade");
        }
    }


    switch(idade) {
    case 1:{
        printf("Idade é um");
        break;
    }
    case 10: {
        printf("Idade é dez");
        break;
    }
    default: {
        printf("Valor inválido");
        }
    }

printf("\n");
    
}
