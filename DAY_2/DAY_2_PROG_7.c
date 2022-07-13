#include <stdio.h>

int main()
{
    int i,max,min;
    int cnt=0;
    printf("Enter the ranges of Year\n");
    scanf("%d %d",&min,&max);
         i=min;
    loop:
        if(i<=max)
    {
        if(((i % 4==0)  && ( i % 100 !=0)) || ( i % 400==0))
        cnt++;
        i++;
        goto loop;
    }
     if(cnt!=0)
     printf("Leap Year=%d",cnt);
}
