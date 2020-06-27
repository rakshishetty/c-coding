#include <stdio.h>
#include<string.h>
int main()
{
char str1[10], str2[10];
int len1,len2,i;
printf("\n enter the string1:");
scanf("%s",str1);
printf("%s \n", str1);
printf("\n enter the string2:");
scanf("%s",str2);
printf("%s \n", str2);
len1=strlen(str1);
len2=strlen (str2);
if(len1!=len2)
printf("strings are different \n") ;
else
{
for (i=0;str1[i] !='\0';i++)
{
if(str1[i]!=str2[i])
{
printf("strings are different \n");
}
}
printf("strings are same\n");
return 0;
}
}

