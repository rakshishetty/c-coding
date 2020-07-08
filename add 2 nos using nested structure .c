#include<stdio.h>
struct add
{
int a;
int b;
};
struct sum
{
int sum1;
struct add a1;
};
int main()
{
struct sum s;
printf("Enter two numbers: ");
scanf("%d\t%d",&s.a1.a,&s.a1.b);
printf("%d\t%d", s.a1.a,s.a1.b);
s.sum1=s.a1.a +s.a1.b;
printf("\nSum of 2 no.s=%d",s.sum1);
}

