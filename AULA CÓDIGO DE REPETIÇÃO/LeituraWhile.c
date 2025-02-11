#include <stdio.h>

int main (){
    int num;
    
    printf("Digite um número negativo para sair:");
    scanf("%d", &num);
    
    while (num >= 0){ // condição
        printf("Você digitou: %d\n", num);

        printf("Digite um número negativo para sair:");
        scanf("%d", &num);
    }

    printf("Número negativo detectado. Saindo...\n");

return 0;

}