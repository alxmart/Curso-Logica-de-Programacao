#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[5];
    int i, numero = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }

    printf("\n Vetor antes da Ordenação:  \n\n");

    for ( i=0; i < 5; i++) {
        numero = vetor[i];
        printf("%d \n", numero);
    }

    int alteracoes = 1;
    int temporario = 0;

    while (alteracoes > 0 ) {
        alteracoes = 0;
        for (i = 0; i < 4; i++) {
            if (vetor[i] > vetor[i + 1]) {
        numero = vetor[i];
                temporario = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temporario;
                alteracoes = alteracoes + 1;
            }
        }
    }

    printf("\n Vetor Ordenado:  \n\n");

    for ( i=0; i < 5; i++) {

        printf("%d \n", vetor[i]);
    }

    return 0;
}
