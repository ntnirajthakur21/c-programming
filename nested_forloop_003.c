// C - Program To Print Number Pattern In C
//	OUTPUT Like
//  1
//  2   3
//  4   5   6
//  7   8   9   10
//  11  12  13  14  15

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=1;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d\t",c);
			c=c+1;
		}
		printf("\n",c);
	}
	getch();
	return 0;
}

// Do Follow Me For More Interesting Updates
// Twitter -> @NirajThakur_
// Facebook -> /Developer.Niraj