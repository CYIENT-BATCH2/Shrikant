#include <stdio.h>

int main()
{
  int n;
  printf("Enter the size of array one :");                                      //reading size for array1
  scanf("%d", &n);

  int arr1[n];                                                            //defining the array1
  printf("Enter the elements of array one\n :");                          //reading the elements of the array1
  for(int i=0; i< n; i++) 
     scanf("%d", &arr1[i]);

  int n2;                                                                 //reading size for array2
  printf("Enter the size of array two :");
  scanf("%d", &n2);

  int arr2[n2];                                                              //defining the array2
  printf("Enter the elements of array two\n :");                            //reading the elements of the array2
  for(int i=0; i< n2; i++) 
    scanf("%d", &arr2[i]);

  int n3;
  printf("Enter the size of array three :");                                 //reading size for array3
  scanf("%d", &n3);

  int arr3[n3];                                                               //defining the array3 
  printf("Enter the elements of array three\n :");                            //reading the elements of the array3                                
  for(int i=0; i< n3; i++) 
    scanf("%d", &arr3[i]);

  printf("Common Elements are ");                                           //printing the common elements in the array

  for(int i=0; i< n; i++)                                                  //checking the elemts in array1
  {
      int flag = 0;                                                         //seting flag to 0
      for(int j=0 ; j< n2; j++)                                             //checking the elements in array2
      {
         if(arr1[i]==arr2[j])                                                 //checking the if both elemnts ar same
         { 
            for(int k=0; k< n3; k++)                                        //checking the elememnts in the array3
            {
              if(arr2[j]==arr3[k])                                            //if it has same elements in all the 3 array the falag is set to 1
              {
                flag=1;                                               
                break;
              }
           }
           break;
          }
     }

     if(flag)                                                   //if flag is set to 1 it will print the elements
     printf("%d ", arr1[i]);
  }
return 0;
}
