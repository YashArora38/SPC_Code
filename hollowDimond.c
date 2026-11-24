/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=1;i<=4;i++){
        for(int space=1;space<=4-i;space++){
            printf(" ");
            
        }
        for(int st=1;st<=i;st++){
            if(st==1 || st==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=3;i>=1;i--){
        for(int space=1;space<=4-i;space++){
            printf(" ");
        }
        for(int st=1;st<=i;st++){
            if(st==1 || st==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}