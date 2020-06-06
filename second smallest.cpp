#include<stdio.h>
#include<string.h>
int main()
{
int smallest, secondsmallest;
int a[100], size, i;
printf("\nenter the no. of elements : ");
scanf("%d",&size);
printf("%d" , size);
printf("\nEnter %d elements: ", size);
     for (i=0;i<size;i++)
     {
        scanf("%d", &a[i]);
         printf("%d\t",a[i]);
      }
    if (a[0] < a[1]) 
{
    smallest = a[0];
     secondsmallest = a[1];
}
else
{
     smallest = a[1];
     secondsmallest = a[0];
}
for (i=2; i< size; i++)
 {
     if (a[i]< smallest)
 {
      secondsmallest = smallest;
     smallest = a[i];
}
      else if (a[i] < secondsmallest)
{
     secondsmallest = a[i];
}
}
      printf(" \nSecond smallest element is    %d",secondsmallest);
}
