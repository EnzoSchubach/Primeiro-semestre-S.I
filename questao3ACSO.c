#include <stdio.h>

int main ()
{
    /*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a
cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber
quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de
poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com
base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular
os dados solicitados.*/
float valorPao, valorBroa;

printf ("Insira quantos paes foram vendidos hoje\n");
scanf ("%f", &valorPao);
while (valorPao < 0){
    printf("O valor inserido está incorreto, favor reinserir\n");
    scanf ("%f", &valorPao);
}
printf ("Insira quantas broas foram vendidos hoje\n");
scanf ("%f", &valorBroa);
while (valorBroa < 0){
    printf("O valor inserido está incorreto, favor reinserir\n");
    scanf ("%f", &valorBroa);
}
valorPao *= 0.12;
valorBroa *= 1.5;
valorPao += valorBroa; //Guarda o valor total de vendas em valorPao
valorBroa = valorPao * 0.1; //Guarda o valor à ser guardado na popupança em valorBroa
printf ("As vendas de hoje renderam R$%0.2f, o valor a ser guardado na poupança deve ser %0.2f\n\n", valorPao, valorBroa);
}