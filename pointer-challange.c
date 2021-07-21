#include<stdio.h>
void main()
{
    int foo = 56;
    int *bar =&foo;
    printf("%10d\n",*&&**&&*&&*bar)
}