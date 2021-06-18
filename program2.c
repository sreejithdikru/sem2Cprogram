#include<stdio.h>
void main()
{
int age;
printf("Enter your age");
scanf("%d", &age);

if (age>=18)
{
    printf("you're eligible to vote");
}
else
{printf("sorry you're nor eligible");
}
}