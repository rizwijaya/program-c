#include<stdio.h>
#include<math.h>

long long cnt,n;
int square(long long base)
{
    long long square;
    cnt=1;
    square=0;
    while (cnt<=base)
    {
        square=square+pow(cnt,2); //kuadrat cnt ditambah persegi
        cnt++; //flag
    }
    return square;
}
int main()
{
    long long n;
    scanf("%lld",&n); //input angka
    printf("%lld\n",square(n)); //print angka hasil kuadrat
    return 0;
}
