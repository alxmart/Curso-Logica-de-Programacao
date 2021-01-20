
//Informe seu código aqui

int i = 0;
float valor = 0.00;

valor = parcelaInicial;

for ( i = 1; i <= qtdParcelas;  i++ ) {

if (i == 1) {
    valor = parcelaInicial;
} else {
    valor = valor - (valor * (1/100));
}
    printf("%d  - %.2f \n",  i, valor);
}
