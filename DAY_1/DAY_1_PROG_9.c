#include<stdio.h>
int a=0,a1=0,b=1,b1=0,c=0,c1=1,d=1,d1=1;
int cnt=0,e,f,g,h;

void AND()
{
printf("AND TRUTH TABLE\n");
printf("\nInput X = 0 1 0 1 ");
printf("\nInput Y = 0 0 1 1");
if(a==0 && a1==0)
    e=0;
if(b==1 && b1==0)
    f=0;
if(c==0 && c1==1)
    g=0;
if(d==1 && d1==1)
    h=1;
printf("\nOutput Z = %d %d %d %d",e,f,g,h);
 printf("\n\n");
}

 void OR()
 {
 printf("OR TRUTH TABLE\n");
 printf("\nInput X = 0 1 0 1 ");
printf("\nInput Y  = 0 0 1 1");
if(a==0 && a1==0)
    e=0;
if(b==1 && b1==0)
    f=1;
if(c==0 && c1==1)
    g=1;
if(d==1 && d1==1)
    h=1;
 printf("\nOutput Z = %d %d %d %d",e,f,g,h);
 printf("\n\n");
 }

  void NOT()
  {
 printf("NOT TRUTH TABLE\n");
 printf("\nInput X = 0 1 ");
if(a==0)
    e=1;
if(b==1)
    f=0;
printf("\nOutput Z = %d %d",e,f);
}


int main()
{    int choice;

    printf("1. AND 2. OR 3. NOT\n");
    printf("Enter your choice\n");
fflush(stdout);
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            AND();
            break;
        case 2:
            OR();
            break;
        case 3:
            NOT();
            break;
        case 4:printf("Enter correct Option") ;
        }

}
