#include<stdio.h>
struct stud
{
char name[100];
int roll;
float marks;
};
int main()
{
int n,i,j;
printf("ENTER NUMBER OF STUDENTS: ");
scanf("%d",&n);
struct stud s[n]; // STRUCUTRE VARIABLE //
struct stud temp; // FOR RANKING //
// INPUT //
for(i=0;i<n;i++)
{
printf("ENTER NAME: ");
scanf("%s",s[i].name);
printf("ENTER ROLL NUMBER: ");
scanf("%d",&s[i].roll);
printf("ENTER MARKS: ");
scanf("%f",&s[i].marks);
}
// RANKING //
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++) // IMP FOR BUBBLE SORT //
{
if(s[j].marks<s[j+1].marks)
{temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;}
}
}
// OUTPUT //
printf("*******************************************\n");
printf("RANKINGS:\n");
for(i=0;i<n;i++)
{printf("RANK %d\n \nOF :%s\n",i+1,s[i].name); //  +1 CUS INDEX STARTS AT 0 //
}
return 0;
}
