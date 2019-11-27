#include <stdio.h>

int main(){
  int cons, franquia=7, preco;
  scanf("%d", &cons);
  if(cons<=10){
    printf("%d\n", franquia);
  }
  else if(cons>10&&cons<=30){
    preco=franquia+((cons-10)*1);
    printf("%d\n", preco);
  }
  else if(cons>30&&cons<=100){
    preco=franquia+20+((cons-30)*2);
    printf("%d\n", preco);
  }
  else if(cons>100){
    preco=franquia+20+140+((cons-100)*5);
    printf("%d\n", preco);
  }
  return 0;
}
