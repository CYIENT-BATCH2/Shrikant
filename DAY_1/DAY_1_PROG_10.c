#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter the number\n");
fflush(stdout);
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1>n2)&&(n1>n3))
    printf("Biggest No=%d\n",n1);
    else if((n2>n3)&&(n2>n1))
    printf("Biggest No=%d\n",n2);
    else
    printf("Biggest No=%d\n",n3);
}
