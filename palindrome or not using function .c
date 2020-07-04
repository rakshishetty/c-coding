#include<stdio.h>
int ispallindrome (int num);
int main()
{
int num, result;
printf("\nEnter the number: ");
scanf("%d", &num);
printf("%d \n" , num);
result=ispallindrome (num );
if(result==1)
printf("%d is pallindrome number", num);
else
printf(" %d is not pallindrome number", num);
return 0;
}
int ispallindrome (int num)
{
int rnum=0, r,n;
n=num;
while (n>0)
{
r=n%10;
rnum=rnum*10+r;
n=n/10;
}
if(rnum==num)
return 1;
else
return 0;
}