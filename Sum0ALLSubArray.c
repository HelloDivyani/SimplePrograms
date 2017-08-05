#include <stdio.h>

void create(int n)
{
    int a[n];
    int i;
    int c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int j;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            
            if(sum==0)
            {
                c++;
            }
            
        }
    }
    printf("%d\n",c);
    
}


int main() {
    
	//code
	int t;
	scanf("%d",&t);
	int i;
    int n;
	for(i=1;i<=t;i++)
	{
        scanf("%d",&n);
        create(n);
	}
	
	
	
	
	return 0;
}
