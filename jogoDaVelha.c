#include <stdio.h>

void printar_matriz(char matriz[3][3]){
    for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 3; j++){
            printf ("%c|", matriz[i][j]);
        }
        printf ("\n");
    }
}

char verificar_vencedor(char matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] != ' ' &&
            matriz[i][0] == matriz[i][1] &&
            matriz[i][1] == matriz[i][2]) {
            return matriz[i][0];
        }
    }
    for (int j = 0; j < 3; j++) {
        if (matriz[0][j] != ' ' &&
            matriz[0][j] == matriz[1][j] &&
            matriz[1][j] == matriz[2][j]) {
            return matriz[0][j];
        }
    }
    if (matriz[0][0] != ' ' &&
        matriz[0][0] == matriz[1][1] &&
        matriz[1][1] == matriz[2][2]) {
        return matriz[0][0];
    }
    if (matriz[0][2] != ' ' &&
        matriz[0][2] == matriz[1][1] &&
        matriz[1][1] == matriz[2][0]) {
        return matriz[0][2];
    }
    return ' ';
}

int main(){
    char matriz[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int modo, n = 0, i = 0, j = 0;
    printf ("Bem vindo ao jogo da velha\nDigite 1 para o modo: jogador contra jogador\nDigite 2 para o modo jogador contra máquina\nDigite 3 para o modo máquina contra máquina\nDigite 4 Para sair");
    scanf("%d", &modo);
    switch (modo){
        case 1:
            //pvp
            printf("Jogador 1 você é o X\nJogador 2 você é o O\n");
            while(n == 0);
            printf("Jogador 1, escolha onde irá jogar\nLinha: ");
            scanf("%d", &i);
            printf("\nColuna: ");
            scanf("%d", &j);
            while (matriz[i][j] != ' '){
                printf("Posicao invalida, insira novamente\nLinha: ");
                scanf("%d", &i);
                printf("\nColuna: ");
                scanf("%d", &j);
            }
            matriz[i][j] = 'X';
            printf("Jogador 2, escolha onde irá jogar\nLinha: ");
            scanf("%d", &i);
            printf("\nColuna: ");
            scanf("%d", &j);
            while (matriz[i][j] != ' '){
                printf("Posicao invalida, insira novamente\nLinha: ");
                scanf("%d", &i);
                printf("\nColuna: ");
                scanf("%d", &j);
            }
            matriz[i][j] = 'O';
            verificar_vencedor(matriz);
            break;
        case 2:
            //pve
            break;
        case 3:
            //eve
            break;
        case 4:
            //acabar o jogo
            return 0;
    }
}
