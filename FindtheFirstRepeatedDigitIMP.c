#include <stdio.h>

int main() {
  int num=0;
  scanf("%d",&num);
  int maxDiv=1;
  while(num/maxDiv>=10){
    maxDiv*=10;
  }
  for(int div1=maxDiv;div1>=1;div1/=10){
    int currentDigit=(num/div1)%10;
    for(int div2=maxDiv;div2>div1;div2/=10){
      int previous=(num/div2)%10;
      if(currentDigit==previous){
        printf("%d",currentDigit);
        return 0;
      }
    }
  }

    return 0;
}