int main() {
 int nconta;
    float sinicial, tcobrancas, tcreditos, lcredito;

    while(1){
    printf("Insira o valor da conta(0 para finalizar): ");
    scanf("%d", &nconta);

       if(nconta == 0){

        break;

       }

       printf("Insira o saldo inicial: ");
       scanf("%f", &sinicial);
       printf("Insira o total de cobrancas: ");
       scanf("%f", &tcobrancas);
       printf("Insira o total de creditos: ");
       scanf("%f", &tcreditos);
       printf("Insira o limite de credito: ");
       scanf("%f", &lcredito);

       float nsaldo;
       nsaldo = sinicial + tcobrancas - tcreditos;



       printf("O valor da conta eh: %f\n", nconta);
       printf("O limite de credito eh: %.2f\n", lcredito);
       printf("O saldo eh: %.2f\n", sinicial);

       if(sinicial > lcredito){
       printf("Limite de creditos exedidos\n");
       }


       }

return 0;

    }

