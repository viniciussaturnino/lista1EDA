#include <stdio.h>

int main(){
  int n,m,i,mov,pa,pb,xa,xb,ya,yb,dale=0;
  scanf("%d%d",&n,&m);
  scanf("%d",&mov);
  xa=1;
  ya=1;
  xb=n;
  yb=m;
  for(i=1;i<=mov;i++){
    scanf("%d%d",&pa,&pb);
    switch(pa){
      case 1:
        ya++;
        break;
      case 2:
        ya--;
        break;
      case 3:
        xa++;
        break;
      case 4:
        xa--;
        break;
    }
    switch(pb){
      case 1:
        yb++;
        break;
      case 2:
        yb--;
        break;
      case 3:
        xb++;
        break;
      case 4:
        xb--;
        break;
    }
    if((ya<1||ya>m||xa<1||xa>n)&&dale==0){
      dale = 2345678;
      printf("PA saiu na posicao (%d,%d) no passo %d\n",xa,ya,i);
    }
    else if((yb<1||yb>m||xb<1||xb>n)&&dale==0){
      dale = 2345678;
      printf("PB saiu na posicao (%d,%d) no passo %d\n",xb,yb,i);
    }
    else if(xa==xb&&ya==yb&&dale==0){
      printf("Encontraram-se na posicao (%d,%d) no passo %d\n",xa,yb,i);
      dale = 47845213;
    }
  }
  if(dale == 0){
    printf("Nao se encontraram\n");
  }
  return 0;
}
