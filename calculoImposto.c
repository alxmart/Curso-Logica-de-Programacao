#include <stdio.h>
#include <stdlib.h>

int main()
{

    float areaTotal, areaConstruida = 0;

    printf("Digite a área do terreno: ");
    scanf("%f", &areaTotal);

    printf("Digite a área contruída: ");
    scanf("%f", &areaConstruida);

    float areaNaoConstruida = areaTotal - areaNaoConstruida;

    float impostoAreaConstruida = 5 * areaConstruida;

    float impostoAreaNaoConstruida = 3.80 * areaNaoConstruida;

    float impostoTotal = impostoAreaConstruida + impostoAreaNaoConstruida;

    printf("Imposto total a ser pago:  %.2f", impostoTotal);


    return 0;
}
