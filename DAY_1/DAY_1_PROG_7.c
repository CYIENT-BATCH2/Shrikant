#include<stdio.h>
int main()
{
long int n;
int r,sum=0,temp;
printf("enter the number\n");
 fflush(stdout);
scanf("%ld",&n);
temp=n;
loop:
if(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
goto loop;
}
if(temp==sum)
printf("palindrome number ");
else
printf("not palindrome");
return 0;
}
