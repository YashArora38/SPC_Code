# include <stdio.h>
int main() {
int n;
scanf("%d",&n);
int i;
for ( i = 0;i<=n;i++)
{
    if(i%2==0)
    {
        continue;
    }
    for(int k=1;k<=(n-i)/2;k++)
    {
        printf(" ");
    }
for (int j=1;j<=i;j++)
{
    
    printf("*");
}
printf("\n");
}
if(i>n)
{
    for (i = n-2;i>=1;i--)
    {
        if(i%2==0)
        {
            continue;
        }
        for(int k=1;k<=(n-i)/2;k++)
        {
            printf(" ");
        }
        for (int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
}