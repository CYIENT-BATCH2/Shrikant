#include <stdio.h>
 
int main(void)
{
 
 unsigned int value=0x11223344;
 char *r= (char*)&value;
 int i;
 for(i=0; i<4; i++) // loop for the traversing in loop;
{
 printf("%x", r[i]);
 }
 return 0;
}
