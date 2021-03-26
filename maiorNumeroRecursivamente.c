#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 15

int maiorNumeroRecursivamente(int *vetor, int maior, int inicio, int fim){
    if (inicio < fim){
        if (maior > vetor[inicio]){
            return maiorNumeroRecursivamente(vetor, maior, inicio+1, fim);
        }
        else{
            return maiorNumeroRecursivamente(vetor, vetor[inicio], inicio+1, fim);
        }
    } else {
        return maior;
    }
}

int main(int argc, char const *argv[])
{
    int vetor[TAM];
    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 1001;
        printf("[%d] - %d\n", i, vetor[i]);
    }

    printf("O maior número é: %d\n", maiorNumeroRecursivamente(vetor, vetor[0], 1, TAM));

    return 0;
}
