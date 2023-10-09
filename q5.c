#include <stdio.h>

int main() {
    double horastrabalhadas, taxahoranormal;

    while(1){
    printf("Insira o numero de horas trabalhadas(-1 para finalizar): ");
    scanf("%lf", &horastrabalhadas);

       if(horastrabalhadas == -1){

        break;

       }

       printf("Insira o valor do horario normal: ");
       scanf("%lf", &taxahoranormal);

       double pagbruto;

       if(horastrabalhadas <= 40){
       pagbruto = horastrabalhadas * taxahoranormal;
       }else {

       double horasextras = horastrabalhadas - 40;
       pagbruto = (40 * taxahoranormal) + (horasextras * 1.5 * taxahoranormal);
       }


    printf("O valor do salario eh: %.2f\n\n", pagbruto);
    }
    return 0;
}
