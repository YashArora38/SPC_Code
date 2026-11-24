#include<stdio.h>
int main(){
  int m=0;
  scanf("%d",&m);

  char grade = 'x';

  if(m >= 95){
    grade = 'A';
  }else if(m >= 75){
    grade = 'B';
  }else if(m >= 60){
    grade = 'C';
  }else if(m >= 50){
    grade = 'D';
  }

  printf("Grade = %c, marks = %d",grade,m);
  
  return 0;
}







  

  // if(num%3 == 0){
  //   if(num%5 == 0){
  //     printf("FizzBuzz\n");
  //   }else{
  //     printf("Fizz\n");
  //   }
  // }else{
  //   if(num%5 == 0){
  //     printf("Buzz");
  //   }
  // }

  

  // if(num%3 == 0 && num%5 != 0){
  //   printf("Fizz\n");
  // }

  // if(num%5 == 0 && num%3 != 0){
  //   printf("Buzz\n");
  // }

  // if(num%3 == 0 && num%5 == 0){
  //   printf("FizzBuzz\n");
  // }



  // if(num%3 == 0){
  //   printf("Fizz\n");
  // }

  // if(num%5 == 0){
  //   printf("Buzz\n");
  // }

  // if(num%3 == 0 && num%5 == 0){
  //   printf("FizzBuzz\n");
  // }

  