#include <stdio.h>

int main() {
  int num=0;
  int count=0;
  int sum=0;
  int rem=0;
  scanf("%d",&num);
  int numCopy=num;
  while(num>0){
    count++;
    num=num/10;
  }
  for(int i=0;i<count;i++){
    rem=numCopy%10;
    sum=sum*10+rem;
    numCopy=numCopy/10;
    

  }
  printf("%d",sum);
  

    return 0;
}