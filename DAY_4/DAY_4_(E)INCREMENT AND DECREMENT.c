#include<stdio.h>
int main()
{
int i=10,j=50,k;

k=++i+j++; //i=?,j=?,k=?
printf("i=%d j=%d k=%d\n",i,j,k);

k=i++-++j;//i=?,j=?,k=?
printf("i=%d j=%d k=%d\n",i,j,k);

k=--i+j++ * i++ -j--; //i=?,j=?,k=?
printf("i=%d j=%d k=%d\n",i,j,k);

k=(i--+ j++);//i=?,j=?,k=?
printf("i=%d j=%d k=%d\n",i,j,k);
}
