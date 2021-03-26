#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

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

    for(int j = 0; j < TAM; j++){
        if (entrada == vetor[j]){
            printf("\nO valor %d está na posição %d\n", entrada, j);
        }
    }
    
    return 0;
}