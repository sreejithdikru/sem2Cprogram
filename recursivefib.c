#include <stdio.h>
 
//function to print fibonacii series
void getFibonacii(int a,int b, int n)
{   
    int sum;
    if(n>0)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        getFibonacii(a,b,n-1);
    }
}
