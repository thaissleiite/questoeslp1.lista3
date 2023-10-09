#include <stdio.h>

int main() {
    float capital, taxa, juros;

    while(1){
    printf("Insira o valor do emprestimo(0 para finalizar): ");
    scanf("%f", &capital);

       if(capital == 0){

        break;

       }

       int dias;

       printf("Insira a taxa de juros: ");
       scanf("%f", &taxa);
       printf("Insira o periodo do emprestimo(dias): ");
       scanf("%d", &dias);

       juros = (capital * taxa * dias) / 365;

    printf("O valor dos juros eh: %.2f\n", juros);
    }
    return 0;
}
