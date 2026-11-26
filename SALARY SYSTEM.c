#include<stdio.h>

struct sal
{
    char name[25];
    int age;
    int basic;
};

int main()
{
    int i,j;
    int tsa1, tsa2;

    struct sal s[5];
    struct sal temp;

    // INPUT
    for(i=0;i<5;i++)
    {
        printf("\nENTER NAME: ");
        scanf("%s",s[i].name);

        printf("ENTER AGE: ");
        scanf("%d",&s[i].age);

    printf("ENTER BASIC: ");
scanf("%d",&s[i].basic);
}
// SORT IN DESCENDING ORDER OF TOTAL SALARY //
for(i=0;i<4;i++)
{
for(j=0;j<4-i;j++)
{
tsa1 = s[j].basic + (10*s[j].basic)/100 + (5*s[j].basic)/100;
tsa2 = s[j+1].basic + (10*s[j+1].basic)/100 + (5*s[j+1].basic)/100;
if(tsa1 < tsa2)
{
temp = s[j];
s[j] = s[j+1];
s[j+1] = temp;
}
}
}

// OUTPUT //
printf("\n=================================\n");
for(i=0;i<5;i++)
{
int tsa;
tsa = s[i].basic + (10*s[i].basic)/100 + (5*s[i].basic)/100;
printf("\nRANK = %d\n",i+1);
printf("NAME = %s\n",s[i].name);
printf("AGE = %d\n",s[i].age);
printf("TOTAL SALARY = %d\n",tsa);
}
return 0;
}
