#include<stdio.h>
int main()
{
int a[10][10],b[10] [10],c[10][10],d[10] [10], row, col, i,j;
printf("Enter the Nunber of rows and columns:");
scanf("%d\t%d",&row, &col);
printf("%d\t%d", row, col);
printf("\nEnter the elements of first matrix\n ");
for(i=0;i<row; i++)
{
for(j=0;j < col;j++)
{
scanf("%d", &a[i][j]);
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\nEnter the elements of second matrix\n");
for (i=0;i<row; i++)
{
for(j=0;j<col;j++)
{
scanf("%d", &b[i][j]);
printf("%d\t" , b[i][j]);
}
printf("\n");
}
printf("\nThe addition of 1st and 2nd matrix\n\t\t");
for (i=0;i<row; i++ )
{
for(j=0;j<col;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<row; i++)
{
for (j=0;j<col;j++)
{
printf("%d\t ",c[i][j]);
}
printf("\n\t\t");
}
printf("\nThe subtraction of 1st and 2nd matrix\n\t\t");
for (i=0;i<row; i++)
{
for (j=0;j < col;j++)
{
d[i][j]=a[i][j] - b[i][j];
}
}
for (i=0;i<row; i++)
{
for(j=0;j< col;j++)
{
printf( "%d\t ",d[i][j]);
}
printf("\n\t\t");
}
return 0;
}