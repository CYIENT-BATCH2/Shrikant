
#include <stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter the Number to be Reverse\n");
fflush(stdout);
    scanf("%d",&num);
    loop:
    if(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
        goto loop;
    }
    printf("After reverse = %d",rev);
   
}
