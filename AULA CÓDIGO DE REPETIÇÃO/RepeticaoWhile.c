#include <stdio.h>

int main (){
    int i = 1; // Variávl de incremento

    while (i <= 5){ // condição
        printf("%d\n", i); //Saída
        i++; //Incremento adicionado para que não haja o loop infinito. Esse incremento faz com que o numero 1 some +1 e assim sucessivamente.
    }

return 0;
}