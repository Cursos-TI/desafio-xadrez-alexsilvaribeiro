#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    printf("\n-----------BISPO-------------------------\n\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Utilizando a estrutura DO-WHILE para implementar a movimentação:
    int i=0;
    do
    {
        printf("cima + direita %d\n",i+1);
        i++;
    } while (i<=4);
    
    printf("\n-----------TORRE-------------------------\n");


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Utilizando a estrutura FOR para implementar a movimentação:

    for (int j = 0; j < 5; j++)
    {
        printf("direita %d \n",j+1);
    }
    
    printf("-----------RAINHA-------------------------\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int a=0;
    while (a<8)
    {
        printf("esquerda %d \n",a+1);
        a++;
    }
    
    printf("\n-----------------------------------------\n");

    

    return 0;
}
