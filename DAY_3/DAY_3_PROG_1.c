#include <stdio.h>
int main() 
{
    int i,rem,sum=0,average,p,q,r,s,t,u,v;
    float a,b,c,d,e,f,g,fsum,avg1,Divide,Avg;
   printf("Enter the 8 Integer value\n");
    scanf("%d",&i);
    printf("Enter the 7 Float Values\n");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    
   printf("Integer values= %d\n",i);
    printf("Float Values=%.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",a,b,c,d,e,f,g);
   
    loop:
    if(i!=0)
    {
        rem=i%10;
        sum=sum+rem;
        i=i/10;
        goto loop;
    }
    printf("Integer Sum=%d\n",sum);
    average=sum/8;
    printf("Average Integer of 8 No:=%d\n",average);
   
    fsum=a+b+c+d+e+f+g;
    printf("\nFloat Sum= %f\n",fsum);
    avg1=sum/8;
    printf("Average Flaot of 8 No:=%f\n",avg1);
    
    Divide=sum/fsum;
    printf("\nDivide int and float sum= %f\n",Divide);
    
    Avg=average/avg1;
    printf("Average of int and float= %f\n",Avg);
    
    p=a*10;
    q=b*10;
    r=c*10;
    s=d*10;
    t=e*10;
    u=f*10;
    v=g*10;
    printf("\nConverting Float to integer= %d %d %d %d %d %d %d",p,q,r,s,t,u,v);
    
}
