#include<stdio.h>
#include<conio.h>
void main()
{
   int num,i,fact=1;
     printf("Enter factorial number:");
     scanf("%d",&num);
  for (i=num;i>0;i=i-1

  fact=fact*i;
printf("\nThe factorial of %d is %d", num,fact);

getch();
}
