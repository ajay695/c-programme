#include<stdio.h>
#include<conio.h>

     void main()
{
	 int n1, n2, hcf, lcm, i;
	 printf("Enter 1st and 2nd number: ");
	 scanf("%d,%d", &n1,&n2);
	 // Finding HCF 
	 for(i=1; i<=n1; i++)
	 {
		  if(n1%i==0 && n2%i==0)
		  {
		   	hcf = i;
		  }
	 }
	 //Finding lcm 
	 lcm = (n1 * n2)/hcf;
	 printf("HCF = %d and lcm = %d", hcf, lcm);
	 
	 return ;
}
