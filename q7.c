#include <stdio.h> //biblioteca padrão de entrada e saída em C
  int main (){ //funcao principal indica que a função retorna um valor
    int n1, n2, cont, maior1, maior2; //tipo de dado + variavel -  armazenar os números fornecidos pelo usuário

      printf("Insira o numero:\n");
        scanf("%d", &n1);
        ////imprime o que o usuário deve fazer
        //ler o que foi inserido pelo usuário e armazena na variável

          maior1 = n1;
        
        for(cont = 0; cont <= 9; cont++){
                //loop
          printf("Insira o primeiro numero:\n");
          scanf("%d", &n1);
          printf("Insira o segundo numero:\n");
          scanf("%d", &n2);

          if(n1 > maior1){
            maior1 = n1;
   }

    maior2 = n2;
            if(n2 > maior2){
                maior2 = n2;
            }

}

printf("O maior eh %d e %d\n", maior1, maior2 );
            return 0;




  }
