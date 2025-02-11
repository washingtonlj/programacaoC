#include <stdio.h>

int main(){

int idade;
float altura;
char opcao;

printf("Entre com a sua idade\n");
scanf("%d", &idade);
printf("Idade: %d\n", idade);

printf("Entre com a sua altura\n");
scanf("%f", &altura);
printf("Altura: %f\n", altura);

printf("Entre com a opção\n");
scanf(" %c", &opcao);
printf("Opção: %c\n", opcao);



//sintaxe scanf
//scanf("formato1" "formato2", &variavel1, &variavel2,...)

}