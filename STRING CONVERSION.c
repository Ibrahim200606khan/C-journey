#include<stdio.h>
#include<ctype.h>
int main(){
char str[100];
int i;
printf("ENTER STRING TO FLIP:");
fgets(str,100,stdin); // using fgets to read even space //
// if else //
for(i=0;str[i]!='\0';i++) // '\0' is how a string tells the program it end there //
{
if(islower(str[i]))
    {printf("%c",toupper(str[i]));}
else if (isupper(str[i]))
    {printf("%c",tolower(str[i]));}
    else
    {printf("%c",str[i]);} // If the character is neither lowercase nor uppercase leave it unchanged //
}
return 0;
}
