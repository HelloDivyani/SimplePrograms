/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You are required to complete below method */

int Dis(int A[],int k)
{
    int i,j;
    int count=0;
    //int z=0;
 //   printf("Check");
    //for(i=0;i<k;i++)
    //{
      //  printf("%d",A[i]);
    //}
    for(i=0;i<k;i++)
    {
        
        for(j=0;j<i;j++)
        {
           if(A[j]==A[i])
           {
               break;
           }
           
            
        }
         if(j==i)
          {
                count++;
          }
          
    }
    return count;
    
}


void countDistinct(int A[], int k, int n)
{
    int i;
    int c;
    int m=0;
    int j;
    int b[k];
   for(i=0;i<=n-k;i++)
   {
       m=0;
       for(j=i;j<k+i;j++)
       {
           b[m]=A[j];
           m++;
       }
       c=Dis(b,k);
       printf("%d ",c);
      // printf("ok");
   }
    
    //Your code here
}

