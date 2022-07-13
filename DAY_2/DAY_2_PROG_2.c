#include <stdio.h>

int main()
{
    long int num,bit=7;
    printf("Enter the number\n");
    scanf("%ld",&num);
    loop:
    if(bit>=0)
    {
        
        printf("%d",(num>>bit)&1);
        bit--;
        goto loop;
    }
}
