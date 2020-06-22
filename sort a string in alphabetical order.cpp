/*C Program to sort a string in alphabetical order*/
#include <stdio.h>
#include <string.h>
int main()
{
char string [100];
char temp;
int i,j;
printf("\nEnter the string");
scanf("%s", string);
printf("%s" , string);
int n=strlen(string);
for (i = 0;i<n-1;i++)
{
for (j=i+1;j< n;j++)
{
if (string [i]>string [j])
{
temp=string[i];
string[i] = string[j];
string[j] = temp;
}
}
}
printf("\nThe sorted string is: %s", string) ;
return 0;
}