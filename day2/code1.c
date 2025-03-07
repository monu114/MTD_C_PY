#include<stdio.h>
int main()
{
    int m=3,n=-2,c=8;
    n++;
    printf("%d %d %d\n",m,n,c);
    ++n;
    printf("%d %d %d\n",m,n,c);
    c=--m;
    printf("%d %d %d\n",m,n,c);
    n=++c;
    printf("%d %d %d\n",m,n,c);
}