#include<stdio.h>

int main()
{
    long long i,a,c=0;
    scanf("%lld",&a); //input test case
    long long x[a];
    for(i=0; i<a; i++)
    {
        scanf("%lld",&x[i]); //input angka
        c++; //flag c bertambah
        if(x[i]==x[i-1])
            c--; //jika ada huruf kembar kurangi flag
    }
    printf("%lld\n",c); //print flag
}
