#include <stdio.h>
   void main() 
{
int num, i,j=0;
       printf("Enter a number:");
       scanf("%d",&num);
       //check for prime number
       for (i=1;i<=num;i=i+1)
       {
           if((num%i==0))
          {
              j=j+1;
           }
       }
        if(j==2)
            printf("%d is a prime number",num);
        else
            printf("%d is not a prime number",num);
       
    return(0);
}