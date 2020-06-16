#include<stdio.h>
int main()
{
int a[10][10],m,n,i,j,rmax=0, cmax=0;
printf("\n Enter the order of matrix");
scanf("%d%d\n" , &m, &n);
printf("%d\t%d", m,n);
printf("Enter the matrix \n ");
for (i=0;i<m; i++)
{
for (j=0;j<n;j++)
{
scanf("%d\t", &a[i][j]);
printf("%d\t", a[i][j]);
}
printf("\n");
}
for (i=0;i<m; i++)
{
for (j=0;j<n;j++)
{
if(a[i][j]>rmax)
{
rmax=a[i][j];
}
}
printf("\n max.element in row %d is %d", i+1, rmax);
}
for(i=0;i<n; i++)
{
for (j=0;j<m;j++)
{
if(a[j][i]>cmax)
{
cmax=a[i][j];
}
}
printf("\n max.element in column %d is %d", i+1,cmax);
}
}