#include <stdio.h>
#define pi 3.14

int main()
{
    int r,c=0;
    printf("Enter the radius\n");
	fflush(stdout);
    scanf("%d",&r);
    c=2*pi*r;
    printf("Area=%d",c);
}
