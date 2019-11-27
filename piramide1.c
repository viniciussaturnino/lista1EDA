#include <stdio.h>

int main(){
  int n,x=1,i;
  scanf("%d",&n);
  while (x<=n){
    for(i=1;i<x;i++){
      printf("%02d ",x);
    }
    printf("%02d",x);
    printf("\n");
    x++;
  }
  printf("\n");
  x=1;
  while (x<=n){
    for(i=1;i<x;i++){
      printf("%02d ",i);
    }
    printf("%02d",i);
    printf("\n");
    x++;
  }
  return 0;
}
