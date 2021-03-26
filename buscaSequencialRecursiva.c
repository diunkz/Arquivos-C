#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int buscaSequencialRecursiva(int *vetor, int inicio, int chave, int fim){
    if (inicio < fim){
        if (chave == vetor[inicio]){
            return inicio;
        }else {
            return buscaSequencialRecursiva(vetor, inicio+1, chave, fim);
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int vetor[TAM], entrada = 0;
    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 1001;
        printf("[%d] - %d\n", i, vetor[i]);
    }
    printf("\nValor a ser buscado sequencialmente: ");
    scanf("%d", &entrada);

    printf("O valor está na posição %d\n", buscaSequencialRecursiva(vetor, 0, entrada, TAM-1));

    
    return 0;
}