
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	 float p, t, r, SimpleInterest, CompoundInterest;
	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
	
	 //Calculating simple interest
	 SimpleInterest = (p * t * r)/100.0;
	
	 // Calculating compound interest
	 CompoundInterest = p * (pow(1+r/100, t) - 1);
	
	 printf("SimpleInterest = %.3f\n", SimpleInterest);
	 printf("CompoundInterest = %.3f", CompoundInterest);

	 return;
}
