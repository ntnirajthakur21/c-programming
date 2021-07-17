// C - Program To Print Pascals triangel upto n lines that user inputs
// In mathematics, Pascal's triangle is a triangular array of the binomial coefficients that arises in probability theory, combinatorics, and algebra.
//  - Niraj Kumar Thakur

#include<stdio.h>											
#include<conio.h>
int fact(int n)												// Defining Functions To Find Factorial
{
	int a,f=1;
	for(a=n;a>=1;a--)
	{
		f=f*a;
	}
	return f;
}
int main()													// Main Functions Start
{
	int f1,f2,f3,comb,n,a,b,c;
	printf("Enter the number of row:");						
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		for(c=n;c>a;c--)									// This Loop Prints Horizental Tabs At Starting for Empty Steps
		{
			printf("\t");
		}
		for(b=0;b<=a;b++)									// Loop That Prints Series
		{
			f1=fact(a);		  								//   n!
			f2=fact(b);		  								//   r!
			f3=fact(a-b);	  								//   (n-r)!
			comb=f1/(f2*f3);								// Combination Formula
			printf("%d\t\t",comb);							
		}
		printf("\n");										// Moves Curser To Next Line
	}
	getch();
	return 0;
}

// Do Follow Me For More Interesting Updates
// Twitter -> @NirajThakur_
// Facebook -> /Developer.Niraj
