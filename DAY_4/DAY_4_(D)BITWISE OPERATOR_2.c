#include <stdio.h>

int main() {
    int i,j,k;
i=10,j=20,k=30;

k=i&&j&k;
printf("k=%d\n",k);

k=i&j|k&&i;
printf("k=%d\n",k);

k=i||j&j;
printf("k=%d\n",k);

k=i||j&(j&&k);
printf("k=%d\n",k);
}
