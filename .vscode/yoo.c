#include<stdio.h>
int main(){
  float distance;
  float rate;
  scanf("%f",&distance);
  if(distance<3){
    rate=15*distance;
  }else if(distance <5){
    rate=distance*22;

  }else if(distance<7){
    rate=distance*28;

  }else if(distance<10){
    rate=distance*33;
  }
  else{
    rate=distance*45;
  }
  rate=rate -(rate*0.1);
  printf("%.2f",rate);













  return 0;
}