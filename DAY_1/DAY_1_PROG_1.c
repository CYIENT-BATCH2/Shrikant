#include <stdio.h>
int main()
{
    int num,add;
    printf("Enter the number\n");
    fflush(stdout);
    scanf("%d",&num);
    if(num%11==0)
    {
        add=num+1;
        printf("Sepcial No:-%d Getting Add=%d\n",num,add);
    }
        else
        printf("No Sepcial No\n");
}
