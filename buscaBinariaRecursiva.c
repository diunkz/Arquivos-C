//só pode ser utilizada em um conjunto de dados ordenado

#include <stdio.h>
#define TAM 10

int buscaBinariaRecursiva(int *vetor, int chave, int inicio, int fim){
    int meio;

    if (inicio <= fim){
        meio = (inicio + fim) / 2;

        if (chave == vetor[meio]){
            return meio;
        }
        else if (chave < vetor[meio]){
            return buscaBinariaRecursiva(vetor, chave, inicio, meio-1);
        }
        else{
            return buscaBinariaRecursiva(vetor, chave, meio+1, fim);
        }
    }    
        return -1;
}

int main(int argc, char const *argv[])
{
    int entrada = 0;
    int vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};

    printf("Valor: ");
    scanf("%d", &entrada);

    printf("\n-> %d\n", buscaBinariaRecursiva(vetor, entrada, 0, TAM-1));

    return 0;
}