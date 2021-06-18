#include<stdio.h>
void main()
{
int a;
printf("Enter the number to check ");
scanf("%d", &a);
if (a>0)
{
    printf("you've entered the positive number %d ",a);
    }
    
else if (a==0)
{
    printf("you entered %d which is neither +ve nor -ve",a);
}

    
else 
{
    printf("you've entered the negative number %d",a);
}
}


