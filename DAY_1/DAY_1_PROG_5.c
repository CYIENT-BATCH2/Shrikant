#include <stdio.h>
int main()
{
    int num,rem,cnt=0,cnt1=0,temp;
    printf("Enter the num\n");
fflush(stdout);
    scanf("%d",&num);
    temp=num;
     loop:
    if(temp)
    {
        rem=temp%10;
        if(rem%2==0)
        cnt++;
        else
        cnt1++;
        temp/=10;
        goto loop;
    }
    if(cnt==2)
    printf("Even=%d Odd=%d\n",cnt,cnt1);
}
