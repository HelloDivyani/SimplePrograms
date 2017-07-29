#include<stdio.h>


void b(int n)
{
    int a[14]={0};
    int i=0;
    for(i=0;i<14;i++)
    {
        if(n>1)
        {
            a[14-i-1]=n%2;
            n=n/2;
        }
        else if(n==0 || n<0)
        {
            a[14-i-1]=0;
            n=0;
        }
        else if(n==1)
        {
            a[14-i-1]=1;
            n=0;
        }
    }
    for(i=0;i<14;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int i,j;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
       b(n);
       printf("\n");
       // printf("Case %d  : %d",i,bin(n));
    //    printf("\n");
        
    }
    
    return 0;
}
