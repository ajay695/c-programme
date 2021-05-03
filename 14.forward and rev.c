#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter 3 integer value:");
scanf("%d,%d,%d",&a,&b,&c);
printf("The forward order:%d,%d,%d\n",a,b,c);
printf("The reverse order:%d,%d,%d",c,b,a);
getch();
}

//using while loop
#include <stdio.h>
 
void main()
{
  int n, reverse;
 
  printf("Enter a number to reverse\n");
  scanf("%d", &n);
  printf("forward number is  %d\n",n);
  while (n != 0)
  {
    reverse = reverse * 10;
    reverse = reverse + n%10;
    n = n/10;
  }

  printf("Reverse number is  %d\n", reverse);
 
  return ;
}
