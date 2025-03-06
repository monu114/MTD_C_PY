#include<stdio.h>
int main()
{
    int Num1 =0;
    long int Num2 =0;
    long long int Num3 =0;
    double d=0.0;
    float f=0.0f;
    printf("%d %d %d %d %d %d\n",sizeof(int),sizeof(long int),sizeof(long long int),sizeof(double),sizeof(float));
    printf("%d %d %d %d %d %d\n",sizeof(Num1),sizeof(Num2),sizeof(Num3),sizeof(d),sizeof(f));
    return 0;
}
