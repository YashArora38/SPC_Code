/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i =n;i>0;i--){
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for(int st=1;st<=i;st++){
            if(i==n ||st==1 || st==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for(int st=1;st<=i;st++){
            if(i==n || st==1 || st==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}