#include<stdio.h>
int gcd(int a, int b);
int main()
{
int x ,y, GCD, lcm;
printf("enter two integers: ");
scanf("%d\t%d",&x,&y);
printf("%d\t%d",x, y); 
GCD = gcd(x,y);
lcm=(x*y)/GCD; 
printf("\nGCD of %d and %d=%d\n", x, y,GCD);
printf("LCM of %d and %d = %d\n", x, y,lcm);
return 0;
}
int gcd(int a,int b)
{
if (b==0)
{
return a;
}
else
{
return gcd(b, a%b);
}
}

