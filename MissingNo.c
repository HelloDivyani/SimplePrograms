#include <stdio.h>

int main() {
	//code
	int test;
	int j;
	int sum=0;
	scanf("%d",&test);
	int i,n;
	for(i=1;i<=test;i++)
	{
	    sum=0;
	    scanf("%d",&n);
	    int a[n];
	    for (j=0;j<n-1;j++)
	    {
	        scanf("%d",&a[j]);
	        sum+=a[j];
	        //printf("%d",sum);
	    }
	    
	    int e=n*(n+1);
	    e=e/2;
	    e=e-sum;
	    printf("%d",e);
	    printf("\n");
	}
	return 0;
}
