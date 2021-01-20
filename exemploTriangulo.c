#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c;

    printf("Digite o lado A: \n");
    scanf("%d", &a);

    printf("Digite o lado B: \n");
    scanf("%d", &b);

    printf("Digite o lado C: \n");
    scanf("%d", &c);

    if ((a == b) && (b == c)) {
                printf("O triângulo é Equilátero. \n");
    } else if ((a != b) && (b != c) && (a != c)) {
                printf("O triângulo é Escaleno. \n");
    } else {
                printf("O triângulo é Isósceles. \n");
    }


    return 0;
}
