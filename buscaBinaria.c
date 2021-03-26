//só pode ser utilizada em um conjunto de dados ordenado

#include <stdio.h>
#define TAM 10

int buscaBinariaIterativa(int *vetor, int chave, int fim){
    int inicio = 0;
    int meio = (inicio + fim) / 2;

    while (inicio <= fim){
        if (chave == vetor[meio]){
            return meio;
        }
        else if (chave < vetor[meio]){
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
        meio = (inicio + fim) / 2;
    }
        return -1;
}

int main(int argc, char const *argv[])
{
    int entrada = 0;
    int vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};

    printf("Valor: ");
    scanf("%d", &entrada);

    printf("\n-> %d\n", buscaBinariaIterativa(vetor, entrada, TAM-1));

    return 0;
}