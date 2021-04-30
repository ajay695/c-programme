#include<stdio.h>
#include<math.h>

int main()
{
    int num,ones,tens,hundred,sum;
    printf("Enter number:");
    scanf("%d",&num);
    
    ones=num%10;
    tens=num%100;
    tens=tens/10;
    hundred=num/100;
  
sum=pow(ones,3)+pow(tens,3)+pow(hundred,3);
if(num==sum)
  printf("Armstrong");
else
  printf("not Armstrong");
}