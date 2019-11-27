# include <stdio.h>

int main(){
  int n,i,j=1,x,y,space=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    space+=1;
    }
  for(i=0;i<n;i++){
	   x=j;
	   y=space;
    while(y>1){
        printf(" ");
        y--;
      }
    while(x>=1){
        printf("*");
        x--;
      }
    j+=2;
    space--;
    printf("\n");
	}
      return 0;
}
