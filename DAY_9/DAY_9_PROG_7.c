#include <stdio.h>

int main()
{
   int num,num1,num2;
   printf("Enter the number for SSPSTAT\n");// input for the SSPSTAT
   scanf("%d",&num);
   printf("Binery for SSPSTAT register\n");// Binary for SSPSTAT
   
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num>>bit)&1));
   }
   printf("\n");
   if((num & 88)==88) //Check the number is equal to that bit
   {
        printf("CKE, P and S bit already set\n");
   }
   num1=(num&(~88)); // if that bit is not set then OR operation for the set bit
   printf("After setting the CKE, P and S bit\n");
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num1>>bit)&1));
   }
   printf("\n");
   
   printf("UA, BF, SMP bits in SSPSTAT register\n");
   if(num==85) // Check the register value is not 0xf0 
   {
       num2=num&131; //Doing adding operation with that number 
       printf("value of Register=%d",num2);
   }
}
