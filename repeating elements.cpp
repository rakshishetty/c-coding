#include<stdio.h>
int main()
{
int i,a[20],j,n;
printf("Enter the size of the array: ");
scanf("%d", &n);
printf("%d" , n);
printf("\nEnter the elements in an array : ");
for(i=0;i<n; i++)
{
scanf("%d",&a[i]);
printf("%d\t",a[i]);
}
printf("\nThe Repeated elements are: ") ;
for(i=0;i<n; i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j]);
{
printf("%d\t", a[i]) ;
}
}
}
}