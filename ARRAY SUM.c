#include<stdio.h>
#define N 10
int main(){
int n[N];
int i,sum=0;
printf("ENTER NUMBERS TO SUM: ");
// input loop //
for(i=0;i<N;i++){scanf("%d",&n[i]);}
// operation loop //
for(i=0;i<N;i++){sum = sum + n[i];}
// output //
printf("SUM OF ELEMENTS = %d",sum);
return 0;
}
