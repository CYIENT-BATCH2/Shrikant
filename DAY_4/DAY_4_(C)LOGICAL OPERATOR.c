
#include <stdio.h>
int main() 
{
int i=10,j=20,k,l;
k=i&&j;  
printf("k=%d\n",k);

k=i||j;
printf("k=%d\n",k);

k=!i;
printf("k=%d\n",k);

printf("\n");
k=i&&(j=20);  //i=?,j=?,k=?
printf("i=%d j=%d k=%d\n",i,j,k);

k=i||(j=20);  //i=?,j=?,k=?
printf("i=%d j=%d k=%d\n",i,j,k);


printf("\n");
l=i||(j=20)&&k; //i=?,j=?,k=?,l=?
printf("i=%d j=%d k=%d k=%d\n",i,j,k,l);



printf("\n");
l=i&&j||j&&k;
printf("l=%d\n",l);

l=i||j&&i||k;
printf("l=%d\n",l);


}
