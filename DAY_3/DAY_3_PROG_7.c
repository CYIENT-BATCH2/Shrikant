#include<stdio.h>
int main()
{
    int yr,age,mth;
    float y,m;
    printf("Enter your Birth year\n");
    scanf("%d",&yr);
    printf("Enter your Birth month\n");
    scanf("%d",&mth);
    y=(2022-yr)*12;
    m=(7-mth);
    age=(y-m)/12;
    printf(" Current Age =%d",age);
}
