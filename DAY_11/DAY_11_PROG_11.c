#include <stdio.h>

int main() {
    // Write C code here");
    int a[]={2,5,8,12,16,23,38,56,72,91},size,temp,x,num;
    size=sizeof(a)/sizeof(a[0]);
    x=(size/2)-1;
    temp=a[x];
    printf("enter the number that u want to search:");
    scanf("%d",&num);
    if(num<temp)
    {
        for(int i=0;i<x;i++)
        {
            if(num==a[i])
            printf("index of searched num is %d",i);
        }
    }
    else
    {
        for(int i=x;i<size;i++)
        {
            if(num==a[i])
            printf("index of searched element is %d",i);
        }
    }
    return 0;
}
