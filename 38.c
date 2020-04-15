#include<stdio.h>

int main()
{
    long long a,b,c;
    scanf("%lld",&a); //input testcase
    while(a--)
    {
        scanf("%lld",&b); //input angka
        printf("%lld\n",b*(b*b+1)/2); //print hasil rumus magic square
    }
}
