#include <stdio.h>

int main() {
    float vendasbrutas, salario;

    while(1){
    printf("Insira o valor das vendas brutas do vendedor: ");
    scanf("%f", &vendasbrutas);

       if(vendasbrutas == -1){

        break;

       }
    salario = 200.0 + (0.09 * vendasbrutas);

    printf("O salario do vendedor eh: %.2f\n", salario);
    }
    return 0;
}
