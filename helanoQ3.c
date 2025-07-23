#include <stdio.h>

int main(){
    int n, valido = 0;
    float aux;
    printf ("Insira o tamanho da matriz\nO valor tem que ser inteiro, impar, positivo e diferente de zero\n");
    scanf ("%f", &aux);
//Lógica pra verificar se sai do padrão
    while (valido == 0){
        n = (int)aux;
        if (n%2 == 0 || n < 1 || n != aux){
            printf ("Numero invalido, reinsira\n");
            scanf ("%f", &aux);
        }
        else{
            valido = 1;
        }
    }
//cria a matriz n x n
    int matriz[n][n];
    