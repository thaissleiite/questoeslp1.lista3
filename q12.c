//erro + falta coisas
#include <stdio.h>
#include <math.h>
  int main (){
    int prod = 1, casas = 0, i, elemcasai, num;
    float soma = 0;

       while(prod < num){
                casas++;
                prod *= 10;
}

     for(i = 0; i < casas; i++){
      elemcasai = num % 10;
      soma += elemcasai * pow(2,i);
      num = num / 10;
      }


printf("%d",soma);
            return 0;




  }
