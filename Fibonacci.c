#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdElementos = 0;

    printf("Digite a qtidade de elementos da sequência: ");
    scanf("%d", &qtdElementos);

    int numeroAtual = 1;

    printf("SequÊncia gerada \n");
    printf("%d  ", numeroAtual);

    int numeroAnterior = 0;

    int i = 0;
    int temporario = 0;

    for (i = 1; i < qtdElementos; i++) {
            temporario = numeroAtual;
            numeroAtual = numeroAtual + numeroAnterior;
            numeroAnterior = temporario;
            printf("%d  ", numeroAtual);
    }



    return 0;
}
