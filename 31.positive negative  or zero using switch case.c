
#include<stdio.h>
#include<conio.h>
      
       void main()
{
      int a; //variable declaration

    printf("Enter any number: ");
    scanf("%d", &a);

    switch (a>0) //return 1 (true) for positive number, otherwise 0 (false)
    {
        // a is positive
        case 1:
            printf("%d is positive number.", a);
        break;

        // a is either negative or zero
        case 0:
            switch (a<0)  // check negative and return 1 for negative number, otherwise 0.
            {
                case 1: 
                    printf("%d is negative number.", a);
                    break;
                case 0:
                    printf("%d is zero.", a);
                    break;
            }
        break;
    }

    return ;
}
      