// C - Program To Print Number Pattern In C
//	OUTPUT Like
//  1
//  3 3
//  5 5 5
//  7 7 7 7
//  9 9 9 9 9

// - Niraj Kumar Thakur

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=1;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d ",c);
		}
		c=c+2;
		printf("\n",c);
	}
	getch();
	return 0;
}

// Do Follow Me For More Interesting Updates
// Twitter -> @NirajThakur_
// Facebook -> /Developer.Niraj