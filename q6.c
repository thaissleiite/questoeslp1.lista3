#include <stdio.h> //biblioteca padrão de entrada e saída em C
  int main (){ //funcao principal indica que a função retorna um valor
    int n1, cont, maior; //tipo de dado + variavel -  armazenar os números fornecidos pelo usuário

      printf("Insira o numero:\n");
        scanf("%d", &n1);
        ////imprime o que o usuário deve fazer
        //ler o que foi inserido pelo usuário e armazena na variável

          maior = n1;
        //cálculos com os números fornecidos

        for(cont = 0; cont <= 9; cont++){
                //loop 
          printf("Insira o numero:\n");
          scanf("%d", &n1);

          if(n1 > maior){
            maior = n1;
                //calcula o maior com um loop indo de 0 até 10
}

}

printf("O maior eh %d\n", maior);
            return 0;


  }
