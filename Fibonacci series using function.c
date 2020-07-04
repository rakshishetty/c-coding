//fibonacci series using function
#include<stdio.h>
void fibo(int n);
void main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);
printf("%d", n);
printf("\nFibonacci Series \nO \n1 \n");
fibo(n);
}
void fibo(int n)
{
int a=0,b=1,c,i;
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("%d \n", c);
a=b;
b=c;
}
}

