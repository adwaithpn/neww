//swapping number witout declaration of 3rd variable
#include<stdio.h>
void main()
{
int a,b;
printf("Enter two Values ");
scanf("%d%d",&a,&b);
a=a+b-a
b=b+a-b
printf("the variable after swapping is =  %d  %d", a,b);
}

