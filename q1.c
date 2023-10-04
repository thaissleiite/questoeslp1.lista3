#include <stdio.h>

int main() {
    float km, lt;

 do{
    printf("Insira a quantidade de litros do recompletamento: \n");
    scanf("%f", &lt);
    printf("Insira a quantidade de quilometros do recompletamento: \n");
    scanf("%f", &km);
     
    printf("A quantidade de Km x Lt eh %.2f\n", km/lt);
}
     while(lt != -1);


    return 0;
}
