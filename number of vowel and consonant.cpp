#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int vcount=0,ccount=0, i,len;
printf("Enter the string: ");
scanf("%s",&str);
printf("%s", str);
len=strlen(str);
for(i=0;i<len; i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]==
'u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
{
vcount++;
}
else
{
ccount++;
}
}
printf(" \nVowel count=%d",vcount);
printf("\nConsonant count=%d",ccount);
return 0;
}