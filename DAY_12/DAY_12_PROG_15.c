#include<stdio.h>   //stdio.h header file 
#include<string.h>  //string.h header file
int main()          //main function starts from here 
{
    int i = 0;      //variable declaration 
    char string[6][15] = {"smkj","abc","yhu","mkl","","oiy"}; //given the input array string 
    while(i < 6) //using the while loop checking the each array string which has the empty 
    {
        if(! strcmp(string[i], ""))  //using the strcmp and strcpy function of string.h header file performing the given operation 
        {
            strcpy(string[i],"CYIENT");
            printf("The empty string is present is the array at %d position\n", i);
        }
        i++;
    }
    printf("After the replaced the empty string  with cyient : \n");
   for(int i = 0; i < 6; i++)
   {
       printf("%s ", string[i]);
   }
}
