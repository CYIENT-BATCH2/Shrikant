#include <stdio.h>

int main()
{
    long int num,handshakes;
    printf("Enter the number\n");
    fflush(stdout);
    scanf("%ld",&num);
    handshakes=num*(num-1)/2;
    printf("%ld",handshakes);
    
}
