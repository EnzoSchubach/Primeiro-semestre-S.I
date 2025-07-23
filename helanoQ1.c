#include <stdio.h>

/*1 – Dado um número ímpar n crie uma matriz n x n preenchida com números de 1 até n*n, organizados linha por linha
 Depois, gere e exiba a matriz espelhada na diagonal principal. Ou seja, troque as posições de linha e coluna. */

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
    aux = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            aux++;
            matriz[i][j] = aux;
        }
    }
//inverte a matriz
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }


//printar a matriz
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
}