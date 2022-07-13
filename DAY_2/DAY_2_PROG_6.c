#include <stdio.h>

int main()
{
    float celcius,farh;
    int num;
    printf("1.Farrenhit\n");
    printf("2.Celcius\n");
    printf("Enter the option\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("Enter the temp in celcius");
        scanf("%f",&celcius);
        farh=(1.8*celcius)+32.0;
        printf("Farh: %.3f\n",farh);
        break;
        case 2:  printf("Enter the temp in Farrenhit");
        scanf("%f",&farh);
        celcius=(farh-32)*5/9;
        printf("Farh: %.3f\n",celcius);
        break;
    }
