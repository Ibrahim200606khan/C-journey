#include<stdio.h>
int main(){
int n;
printf("ENTER YEAR TO CHECK FOR LEAP YEAR");
scanf("%d",&n);
// check //
if(n%400==0)
{printf("THIS IS A LEAP YEAR");}
else if(n%100==0)
{printf("NOT A LEAP YEAR");}
else if(n%4==0)
{printf("THIS IS A LEAP YEAR");}
else{printf("NOT A LEAP YEAR");}
return 0;
}
