
#include<stdio.h>
int main()
{
    int pos,data,bit=7;
    printf("Enter the Data\n");
    scanf("%d",&data);
    printf("Enter the Pos\n");
    scanf("%d",&pos);
    data=data & ~(1<<pos);
    loop:
    if(bit>=0)
    {
       printf("%d",(data>>bit)&1);
        bit--;
        goto loop;
    }
    printf("\n");
    printf("Data= %d",data);
}
