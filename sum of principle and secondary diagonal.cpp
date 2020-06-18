#include<stdio.h>
int main()
{
int a[10][10], i,j,m, n,psum= 0, ssum=0;
printf("Enter no. of rows and column: ");
scanf("%d%d", &m, &n) ;
printf("%d\t%d", m, n) ;
printf(" \nEnter values to the matrix: \n") ;
for (i = 0; i < m; i++)
{
for (j=0; j < n; j++)
{
scanf("%d", &a[i][j]);
printf("%d\t", a[i][j]);
}
printf("\n") ;
}
for (i=0; i < m; i++)
{
for (j=0; j < n; j++)
{
if(i==j)
psum=psum+a[i][j];
}
}
printf("Sum of principal diagonal is %d\n",psum) ;
i=0;
for (j=n-1;j>=0;j--)
{
ssum=ssum+a[i][j];
i++;
}
printf("sum of secondary diagonal is %d\n", ssum) ;
}