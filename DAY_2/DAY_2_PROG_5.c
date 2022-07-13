#include <stdio.h>

int main() 
{
    int num,rev=0,rem;
    
    printf("Enter the number\n");
    scanf("%d",&num);
   
    if(num<=9)
    {
        switch(num)
        {
        case 1:printf("a");
                break;
        case 2:printf("b");
                break;
        case 3:printf("c");
                break;
        case 4:printf("d");
                break;
        case 5:printf("e");
                break;
        case 6:printf("f");
                break;
       case 7:printf("g");
                break;
        case 8:printf("h");
                break;
        case 9:printf("i");
                break;
        }
  
    }
    if(num==32)
    {
        num++;
    }
    
    else if(num>9)
    {
        switch(num)
        {
         case 10:printf("j");
                break;
        case 11:printf("k");
                break;
        case 12:printf("l");
                break;
        case 13:printf("m");
                break;
        case 14:printf("n");
                break;
        case 15:printf("o");
                break;
        case 16:printf("p");
                break;
        case 17:printf("q");
                break;
        case 18:printf("r");
                break;
        case 19:printf("s");
                break;
        case 20:printf("t");
                break;
        case 21:printf("u");
                break;
        case 22:printf("v");
                break;
        case 23:printf("w");
                break;
        case 24:printf("x");
                break;
        case 25:printf("y");
                break;
        case 26:printf("z");
                break;
        }
    }
    
}
