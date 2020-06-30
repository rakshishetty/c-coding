//function without parameter with return type
#include<stdio.h>
int add();
void main()
{
int sum;
sum=add();
printf("Sum is %d", sum);
}
int add()
{
int sum, i=30,j=40;
sum=i+j;
return sum;
}

