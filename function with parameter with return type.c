//function with parameter with return type
#include<stdio.h>
int add(int i,int j);
void main()
{
int sum, a=30, b=40;
sum=add(a,b);
printf("Sum is %d", sum) ;
}
int add (int i,int j)
{
int sum;
sum=i+j;
return sum;
}

