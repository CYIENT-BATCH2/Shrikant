// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int i;
    unsigned char G_Msg_SteeringInformation_Byte[3u];
signed int G_Str_SteeringAngle_sint = -60;

   printf("Binery for G_Msg_SteeringInformation_Byte\n");
     for( bit=32;bit>=0;bit--)
     {
         printf("%d",(G_Str_SteeringAngle_sint>>bit)&1);
     }
     printf("\n");
       printf("Transfer the bit 11 to bit 10---> bit 0 to bit 3\n");
      G_Msg_SteeringInformation_Byte[0]=3072>>9; // Transfer the Bit 9  to Bit 12  to position Bit 0 to Bit 3
       printf("Transfer the bit 9 to bit 2 ---> bit 0 to bit 7\n");
       G_Msg_SteeringInformation_Byte[1]=1022>>1; // Transfer the Bit 1  to Bit 8  to position Bit 0 to Bit 7
        printf("Transfer the bit 1 bit 0 --->  bit 7 to bit 6\n");
       G_Msg_SteeringInformation_Byte[2]=3<<4;
       
    
    for(i=0;i<=2;i++)
    {
        printf("%d\n",G_Msg_SteeringInformation_Byte[i]);
    }
   
}
