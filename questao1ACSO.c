#include <stdio.h>

int main()
{
/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.*/
float Largura, Comprimento;
printf ("Digite a largura do terreno em metros\n");
scanf ("%f", &Largura);
while (Largura <= 0){
    //caso meu usuário seja burro
    printf ("A largura inserida está errada, por favor reinsira\n");
    scanf ("%f", &Largura);
}
printf ("Digite o comprimento do terreno em metros\n");
scanf ("%f", &Comprimento);
while (Comprimento <= 0){
    //caso meu usuário seja burro²
    printf ("O comprimento inserido está errada, por favor reinsira\n");
    scanf ("%f", &Comprimento);
}
Comprimento *= Largura; //botamos a área em m² na variável de comprimento
Largura = Comprimento/10000; //a variável de largura vai armazenar o valor do terreno em hectares só pelo capricho mesmo
printf ("A área total do terreno em metros quadrados é %0.0f, e em hectares é %0.2f\n\n", Comprimento, Largura);
}

