
#include <stdio.h>

int main() {
  
  unsigned int ADCON,CMCON;
  int bit=7;
  printf("Enter the Value for ADCON\n");
  scanf("%u",&ADCON); // data from user for ADCON 
  
  // IF ADCON is checking  if that 0X07
   if((ADCON & 28)==28)
  {
      // if condition true then ask for CMcon Input
      printf("Enter the Value for CMCON\n");
      scanf("%d",&CMCON);
      
     //printing the binery for CMcon
     printf("Binerry for CMCON:\t");
     for(bit=7;bit>=0;bit--)
     {
      printf("%d",((CMCON>>bit)&1));
    }
    printf("\n");    
    
    // Binery for ADCON
    printf("Binerry for ADCON:\t");
     for(bit=7;bit>=0;bit--)
     {
      printf("%d",((ADCON>>bit)&1));
     }
    // Clear the bit CMCON Register
      CMCON=(CMCON & (~15));
      printf("\n");
      // After clear print th binery of CMCON
      printf("After clearing the CMCON :");
     for(bit=7;bit>=0;bit--)
     {
      printf("%d",((CMCON>>bit)&1));
     }
  }
  // Not equal to CHS3, CHS2, CHS1, CHS0 bits are not set 
  else 
   printf(" CHS3, CHS2, CHS1, CHS0 bits are not set\n");
}
