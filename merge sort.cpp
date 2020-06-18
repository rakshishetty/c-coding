#include<stdio.h>
int main()
{
int a[10],i,j,n,ele;
printf("Enter number of elements : ");
scanf("%d",&n);
printf("%d\n",n); 
printf("Enter the array elements : ");
for (i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
printf("%d\t", a[i]);
}
for (i=1; i<n; i++)
{
j=i;
while(j>=1&&a[j]<a[j -1])
{
if(a[j]<a[j-1])
{
ele=a[j];
a[j]=a[j-1];
a[j-1]=ele;
}
j=j-1; 
}
}
printf("\nAfter merge sorting:\n");
for(i=0;i<n; i++)
{
printf("%d\t",a[i]);
}
return 0;
}