#include <stdio.h>

int main(){
  int dayN,monthN,yearN,dayH,monthH,yearH;
  int day=0,month=0,year=0, newday=0;
  scanf("%d%d%d",&dayN,&monthN,&yearN);
  scanf("%d%d%d",&dayH,&monthH,&yearH);
   if(dayH<=31&&dayH>0&&dayN<=31&&monthH<=12&&monthN<=12&&yearH>0&&yearH<=9999&&yearN>0&&yearN<=9999){
     yearN *= 372;
     yearH *= 372;
     monthN *= 31;
     monthH *= 31;
     dayH = dayH + monthH + yearH;
     dayN = dayN + monthN + yearN;
     day = dayH - dayN;
  while (day>=372){
    year++;
    day-=372;
  }
  while (day>=31){
    month++;
    day-=31;
  }
  while(day>0){
    newday++;
    day--;
  }
    printf("%d\n%d\n%d\n", year, month, newday);
   }
   else
     printf("data invalida\n");
  return 0;
}
