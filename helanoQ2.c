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
    //cria a matriz n x n em formato de serpente
    valido = 0;
    int serpente[n][n];
    for (int i = 0; i < n; i++){
        //se for impar, a linha é criada de forma decrescente, se for impar, o contrário
        if (i%2 == 0){
            for (int a = 0; a < n; a++){
                valido++;
                serpente[i][a] = valido;
            }
        }
        else{
            for (int b = n - 1; b >= 0; b--){
                valido++;
                serpente[i][b] = valido;
            }
        }
    }
    //printar a matriz serpente
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf ("%d ", serpente[i][j]);
        }
        printf ("\n");
    }
}