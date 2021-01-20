#include <stdio.h>
#include <stdlib.h>

int main()

{
    int numdigi[10];
    int i = 0;

    for ( i=0; i <= 9; i++) {
        printf("Digite um número: ");
        scanf("%d", &numdigi[i]);
    }

    for ( i=0; i <= 9; i++) {

        printf("%d \n", numdigi[i]);
    }

return 0;

}
