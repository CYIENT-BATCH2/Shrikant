#include <stdio.h> 
int main()
{
int var1, var2, temp; 
printf("Enter two intege\n");
scanf("%d%d", &var1, &var2);
printf("Before Swapping = %d %d\n", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("After Swapping= %d %d\n", var1, var2);
return 0;
}
