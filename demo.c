#include <stdio.h>

int main() {
int a,d,n;
int sum=0;
int currentTerm=a;
scanf("%d %d %d",&a,&d,&n);
for(int i=0;i<n;i=i++){
    sum+=currentTerm;
    currentTerm+=d;
}
printf("%d",sum);

  

return 0;
}
