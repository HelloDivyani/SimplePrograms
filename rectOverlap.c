#include <stdio.h>

void doOverlap(int l1x,int l1y,int r1x,int r1y,int l2x,int l2y,int r2x,int r2y)
{
    // When not onverlap
    // when left
    if(l2x > r1x || l1x > r2x)
    {
        printf("0");
        return ;
    }
    if(l1y < r2y ||r1y > l2y)
    {
         printf("0");
        return ;
        
    }
    printf("1");
    return ;
}


int main() {
	//code
	int l1x,l1y,r1x,r1y;
	int l2x,l2y,r2x,r2y;
	int test;
	scanf("%d",&test);
	int i;
	for(i=1;i<=test;i++)
	{
	    scanf("%d %d %d %d",&l1x,&l1y,&r1x,&r1y);
	     scanf("%d %d %d %d",&l2x,&l2y,&r2x,&r2y);
	     doOverlap(l1x,l1y,r1x,r1y,l2x,l2y,r2x,r2y);
	     printf("\n");
	     
	    
	}
	
	
	return 0;
}
