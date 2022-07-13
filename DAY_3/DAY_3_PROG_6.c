#include<stdio.h>
int main() 
{
	int num,bit;
	printf("Enter the Hex value\n");
	fflush(stdout);
	scanf("%x",&num);
	printf("Enter the bit value\n");
	fflush(stdout);
	scanf("%d",&bit);
	printf("AFTER SHIFTING = %d",num>>bit);
}
