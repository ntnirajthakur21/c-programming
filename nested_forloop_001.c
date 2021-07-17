// C - Program to print number Patterns
// Output Like
//  2 3 4 5 14
//  3 4 5 6 18
//  4 5 6 7 22

// - Niraj Kumar Thakur

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=3;a++)
	{
		c=0;
		for(b=1;b<=4;b++)
		{
			printf("%d ",a+b);
			c=c+a+b;
		}
		printf("%d\n",c);
	}
	getch();
	return 0;
}

// Do Follow Me For More Interesting Updates
// Twitter -> @NirajThakur_
// Facebook -> /Developer.Niraj
