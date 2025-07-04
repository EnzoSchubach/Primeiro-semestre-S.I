#include <stdio.h>

int main ()
{
/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.*/
int ncavalos;

printf("Informe quantos cavalos foram adquiridos\n");
scanf ("%d", &ncavalos);
while (ncavalos <= 0){
    printf ("Foi digitado um número inválido, por favor altere. Quantos cavalos foram adquiridos?\n");
    scanf ("%d", &ncavalos);
}
ncavalos *= 4; //cada cavalo tem 4 patos, guardamos o número de ferraduras na variável ncavalos
printf ("Serão necessárias %d ferraduras\n\n", ncavalos);
}