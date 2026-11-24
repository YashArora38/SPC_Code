#include <stdio.h>

int main() {
  int num=0;
  scanf("%d",&num);
  int numCopy=num;
  int rem=0;
  int sum=0;
  int mul=1;
  while(num>0){
    rem=num%10;
    if(rem%2==0){
    sum=rem*mul+sum;
    mul=mul*10;

    }
    num=num/10;
    
  }
 
  printf("%d",sum);

   

    return 0;
}