//find biggest among three number using pointer in c.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int *pointer1, *pointer2, *pointer3;

    printf("Enter three number: ");
    scanf("%d,%d,%d",&num1,&num2,&num3);
         
          pointer1 = &num1;
          pointer2 = &num2;
          pointer3 = &num3;
    if(*pointer1 > *pointer2)
    {
    	   if(*pointer1 > *pointer3)
	     {
		     printf("%d is the biggest among 3 number", *pointer1);
    	 }
    	else
	     {
		printf("%d is the biggest among 3 number ", *pointer3);
	     }
     }
    else
     {
	       if(*pointer2 > *pointer3)
	     {
		     printf("%d is the biggest among 3 number", *pointer2);
	     }
   	    else
	     {
		     printf("%d is the biggest among 3 number", *pointer3);
	     }
    }
	return 0;
}
