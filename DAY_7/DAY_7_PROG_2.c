// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
  unsigned int data,even_bit,odd_bit,swap;
  int bit=7;
  printf("Enter the number\n");
  scanf("%u",&data); // data from user
//Print the binery that data
printf("Binary for the Given Data\n");
    while(bit>=0)
    {
       printf("%d",(data>>bit)&1);
        bit--;
        
    }
    printf("\n");
// For even bits
  even_bit=data & 0xAAAAAAAA; // 0XAAAAAAAA= 10101010 Binery
  even_bit>>=1; // Right shift by the 1 by that number to get Even bits
 
  // For Odd bits
  odd_bit=data & 0x55555555;  // 0X55555555= 01010101 Binery
  odd_bit<<=1; //Left shift by 1 to get odd bits
  
 // both the even and odd bits doing OR operation to swap for bits
  swap = (odd_bit | even_bit);
  
  printf("After Swapping=%d\n",swap);
  printf("\n");
  
  printf("Binary for After swapping bit\n");
  for(bit=7;bit>=0;bit--){
        printf("%d",(swap>>bit)&1);
  }
    }
  
