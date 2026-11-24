#include <stdio.h>

int main() {

    //int arr[5];
    int arr[8] = {7,8,9,2,1,3,7,4};

    printf("%d\n",arr[5]);
    int sum=arr[3]+arr[6];
    int newSum=0;
    printf("%d\n",sum);
    for(int i=0;i<=4;i++){
         newSum=newSum+arr[i];
    }
    printf("%d\n",newSum);
    printf("%d",arr[arr[5]]);

    return 0;
}