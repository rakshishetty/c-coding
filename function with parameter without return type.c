//function with parameter without return type
#include<stdio.h>
void add (int i,int j);
void main()
{
int sum, a=30, b=40;
add (a, b) ;
}
void add(int i, int j)
{
int sum;
sum=i+j;
printf("Sum is %d", sum);
}

