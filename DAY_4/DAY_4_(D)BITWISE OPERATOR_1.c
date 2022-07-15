#include<stdio.h>
int main()
{
int i=10,j=20,m=5,k;

k=i&j; //k=?
printf("k=%d\n",k);

k=i|j;
printf("k=%d\n",k);

k=i^j;
printf("k=%d\n",k);

k=i&&j|m&&j;
printf("k=%d\n",k);

k=i||j&m&&i;
printf("k=%d\n",k);

k=i&j|j||m;
printf("k=%d\n",k);
}
