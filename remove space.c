#include <stdio.h>
#include <string.h>
void main()
{
char string [ 100] ;
int i=0, j,len;
printf("\nEnter the string :");
gets(string);
puts(string);
len=strlen(string);
for(i=0;i<len; i++)
{
if (string[i]==' ')
{
for (j=i;j<len; j++)
{
string[j]=string[j+1] ;
}
len--;
}
}
printf("\nThe string after removing space is :%s", string) ;
return 0;
}

