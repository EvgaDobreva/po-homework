#include <stdio.h>
#include <string.h>
int main()
{
char str[100],temp;
int i,k=0;
printf("vuvedi text \n");
fgets (str,100,stdin);
i=0;
k=strlen(str) - 1;
while(i<k)
{
temp=str[i];
str[i] = str [k];
str[k] = temp;
i++;
k--;
}
k=strlen(str);
printf("text :");
for(i=0;i<k;i++)
printf("%c", str[i]);
printf("\n");
return 0;
}
