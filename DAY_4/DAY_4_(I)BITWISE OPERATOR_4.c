
#include<stdio.h>
int main()
{
    int pos,num;    
    printf("Enter the Data\n");
    scanf("%d",&num);
  if((num != 0) && ((num &(num - 1)) == 0))
      printf("\n%d is a power of 2", num);
      else
      printf("%d is not power of 2");
    
    
}
