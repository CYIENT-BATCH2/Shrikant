
#include <stdio.h>

void Hex_to_Bin()
{
    int num;
    int bit=7;
    printf("Enter the Hexadecimal number\n");
    scanf("%x",&num);
    
    loop:
    if(bit>=0)
    {
       printf("%d",(num>>bit)&1);
        bit--;
        goto loop;
    }
  
    
}
void Bin_to_Hex()
{
    int num,rem,i=1,add=0;
    printf("Enter the Binery Value\n");
    scanf("%d",&num);
    loop:
        if(num!=0)
        {
            rem=num%10;
            add=add+rem*i;
            i=i*2;
            num/=10;
            goto loop;
        }
        printf("Hexadecimal Values= %x",add);
}
void Hex_to_Dec()
{
   int n,z;
    int bit=32;
    printf("Enter the Hexadecimal number\n");
    scanf("%x",&n);
    loop:
    if(bit--)
    {
        z=(n>>bit)&1;
        goto loop;
    }
    printf("Decimal NUmber=%d",n);
}

void Dec_to_Bin()
{
   int num;
    int bit=7;
    printf("Enter the Decimal number\n");
    scanf("%d",&num);
    
    loop:
    if(bit>=0)
    {
       printf("%d",(num>>bit)&1);
        bit--;
        goto loop;
    }
    
}
void Bin_to_Dec()
{
     int num,rem,i=1,add=0;
    printf("Enter the Binery Value\n");
    scanf("%d",&num);
    loop:
        if(num!=0)
        {
            rem=num%10;
            add=add+rem*i;
            i=i*2;
            num/=10;
            goto loop;
            
        }
        printf("Decimal Values= %d",add);
}

int main()
{   
    int ch;
    printf("\n1.Hex_to_Bin\n 2.Bin_to_Hex\n 3.Hex_to_Dec\n 4.Dec_to_Bin\n 5.Bin_to_Dec\n");
   printf("Enter the choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
                Hex_to_Bin();
                break;
       case 2:
                Bin_to_Hex();
                break;
       case 3:
                Hex_to_Dec();
                break;
        case 4: 
                Dec_to_Bin();
                break;
        case 5: 
                Bin_to_Dec();
                break;
       
   }
}
