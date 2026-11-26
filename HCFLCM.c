#include <stdio.h>

int main() {
int a,b,hcf=1,lcm,i;
printf("ENTER NUMBERS: ");
scanf("%d %d",&a,&b);
if (a==0 || b==0)
{
printf("HCF = 0\n");
printf("LCM = 0\n");
return 0;
}
for (i=1;i<=a && i<=b;i++) 
{
if(a%i==0 && b%i==0)
{
hcf=i;
}
}
lcm = (a*b)/hcf;
printf("HCF = %d\n",hcf);
printf("LCM = %d\n",lcm);
return 0;
}
