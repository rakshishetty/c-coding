#include<stdio.h>
#include<string.h>
void main()
{
char str1[50], str2[50];
int i=0,j=0;
printf("Enter First String: ");
gets(str1);
puts(str1);
printf("Enter Second String:") ;
gets (str2);
puts(str2);
while(str1[i]!='\0')
{
i++;
}
while(str2[j]!='\0')
{
str1[i]=str2[j];
j++;
i++;
}
str1[i]='\0';
printf("Concatenated String is %s",str1);
}

