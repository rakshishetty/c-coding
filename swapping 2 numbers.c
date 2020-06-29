//Swapping 2 numbers
#include<stdio.h>
int main()
{
int x,y, *a, *b, temp;
printf("Enter the' value of x and y:\n");
scanf("%d\n%d",&x,&y);
printf("%d\n%d", x,y);
printf("\nBefore swapping \nx=%d\ny=%d\n",x,y);
a=&x; 
b=&y;
temp=*b; 
b=&y; 
temp=*b;
*b=*a;
*a=temp;
printf("After swapping \nx=%d\ny=%d\n", x,y);
return 0;
}

