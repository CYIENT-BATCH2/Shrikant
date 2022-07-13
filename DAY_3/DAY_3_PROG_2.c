#include<stdio.h>
 int main()
 {
     int num,rem,cnt=0,sum=0;
     printf("Enter the 5 number\n");
     scanf("%d",&num);
     loop:
     if(num!=0)
     {
         rem=num%10;
         cnt++;
         if(cnt==2 || cnt==5)
         sum=sum+rem;
         num/=10;
         goto loop;
     }
     printf("Addition of First and Second Last =%d",sum);
     
 }
