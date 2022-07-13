#include <stdio.h>
int main()
{
    long int rem,num,cnt=0;
    printf("Enter the Lottery Tickets\n");
    scanf("%ld",&num);
    loop:
	if(num!=0)
    {
        rem=num%10;
        if(rem==3)
        cnt++;
        num/=10;
	goto loop;
    }
    if(cnt>0)
    printf("%d",cnt);
}
