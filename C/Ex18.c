#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  float peso, altura, imc;
  char sexo;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o sexo(M ou F): ");
  scanf("%c", &sexo);
  
  printf("Digite o peso: ");
  scanf("%f", &peso);

  printf("Digite a altura: ");
  scanf("%f", &altura);


  imc = peso/(altura*altura);


  if(sexo == 'F'){
    if(imc<19){
      printf("Abaixo do peso");
    }  
    else if(imc>=19 && imc <24) {
      printf("Peso ideal");
    }
    else{
      printf("Acima do peso");
    }  
    printf("\n seu imc e %.2f", imc);
  }


  else if(sexo == 'M'){
    if(imc<20){
      printf("Abaixo do peso");
    }  
    else if(imc>=20 && imc <25) {
      printf("Peso ideal");
    }
    else{
      printf("Acima do peso");
    }  
    printf("\n seu imc e %.2f", imc);
  }
else
    printf("Digite conforme solicitado.");

  return 0;
}