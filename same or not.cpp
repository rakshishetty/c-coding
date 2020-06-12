#include<stdio.h>
int main()
{
int a1[100],a2[100],i,n, m,f;
printf( "Enter no.of elements in 1st array: ");
scanf("%d\n" , &n);
printf("%d\n", n);
printf(" Enter no.of elements in 2nd array: ");
scanf("%d \n", &m);
printf("%d \n", m) ;
printf("Enter the 1st array: ");
for(i=0;i<n; i++)
{
scanf("%d\t" , &a1[i]);
printf("%d \t" , a1 [i]);
}
printf("\nEnter the 2nd array: ");
for(i=0;i<m; i++)
scanf( "%d\t", &a2 [i]);
printf("%d\t", a2 [i]);
for (i=0; i<n; i++)
{
if(a1[i]!=a2 [i])
{
f=0;
break;
}
else
{
f=1;
}
}
if(f==0)
{
printf("\n2 arrays are not equal");
}
else
{
printf("\nTwo arrays are equal");
}
}