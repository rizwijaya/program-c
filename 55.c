#include<stdio.h>

int main()
{
    long long a,b,c,d,has;
    long long i,j;
    scanf("%lld",&a); //input testcase
    for(i=1; i<=a; i++)
    {
        scanf("%lld %lld",&b,&c); //input angka modex
        has=1;
        for(j=1; j<=b; j++)
        {
            d=10%c; //10 mod angka
            has=(has*d)%c;
//hasilnya dikalikan hasil 10 mod kemudian di mod kembali
        }
        printf("Kasus #%lld: %lld\n",i,has%c); //print hasil di mod c
    }
}
