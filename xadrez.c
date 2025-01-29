#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

int bispo, torre, rainha;                                                             // nome das variáveis
char nome [20], cima [5], baixo [5], esquerda [8], direita [7], diagonal [8];        // nome das variáveis
                  

printf("\n\nDESAFIO XADREX - NÍVEL NOVATO\n\n");
   printf("\nExemplos de movimentação BISPO, TORRE e RAINHA, com base nas REGRAS REAIS DO JOGO\n");
        printf("\nQual seu nome: \n");
        scanf("%s", &nome);
printf("\nSeja bem vindo %s\n", nome);
printf("\nVamos começar o jogo\n");

do
{
  printf("Digite a direção e a quantidade de casas para BISPO....\n", nome);
  scanf("%s %d", &diagonal, &bispo);

  if(bispo <=5){                        // se os número entre 0 e 5 divididor por 1 for igual a
    printf("Você digitou correto, movendo bispo para a Diagonal\n");
  } else {
    printf("Você digitou a direção erradaz\n");
  }


} while (bispo != 5);                                          // a condição vai testar todos os números da variável "bispo" se eles são menor ou igual a 5

printf("\nDigite a direção e a quantidade de casas para TORRE...\n");
             

return 0;

   
}












