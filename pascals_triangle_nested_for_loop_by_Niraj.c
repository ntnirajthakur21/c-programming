#include<stdio.h>
#include<conio.h>
//Function to find factorial
int fact(int n)
{
	int a,f=1;
	for(a=n;a>=1;a--)
	{
		f=f*a;
	}
	return f;
}
//main Function
int main()
{
	int f1,f2,f3,comb,n,a,b,c;
	printf("Enter the number of row:");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
//		Loop to print horizental tab
		for(c=n;c>a;c--)
		{
			printf("\t");
		}
//		Loop to print series
		for(b=0;b<=a;b++)
		{
			f1=fact(a);		  		//   n!
			f2=fact(b);		  		//   r!
			f3=fact(a-b);	  		//   (n-r)!
			comb=f1/(f2*f3);		// Combination Formula
			printf("%d\t\t",comb);
		}
		printf("\n\n");
	}
	getch();
	return 0;
}
// BY NIRAJ KUMAR THAKUR
