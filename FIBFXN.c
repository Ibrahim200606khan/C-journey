#include<stdio.h>
// FXN START //
void fib(int n)
{
int a=0,b=1,c,i;
for(i=0;i<=n;i++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
}
// FXN END //
int main()
{ int n;
// input //
printf("ENTER UPTO WHERE TO PRINT: ");
scanf("%d",&n);
fib(n); // CALL //
return 0;
}

