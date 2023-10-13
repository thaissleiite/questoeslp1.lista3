int main() {
    float horastrabalhadas, horanormal, pagamentobruto, horasextras;

    while(1){
    printf("Insira o numero de horas trabalhadas(-1 para finalizar): ");
    scanf("%f", &horastrabalhadas);

       if(horastrabalhadas == -1){

        break;

       }

       printf("Insira o valor do horario normal: ");
       scanf("%f", &horanormal);



       if(horastrabalhadas <= 40){
       pagamentobruto = horastrabalhadas * horanormal;

       }else {

      horasextras = horastrabalhadas - 40;
       pagamentobruto = (40 * horanormal) + (horasextras * 1.5 * horanormal);
       }


    printf("O valor do salario eh: %.2f\n\n", pagamentobruto);
    }
    return 0;
}
