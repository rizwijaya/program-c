#include<stdio.h>
#include<math.h>

long long z[64];
void precom()  //precom utk menyimpan bil
{
    long long i;
    for(i=0; i<63; i++)
    {
        z[i]=pow(2,i); //simpan kuadrat 2 ke dalam array
    }
}
int main()
{
    long long a,b;
    long long n, c, k;
    scanf("%lld",&a); //input angka 1
    scanf("%lld",&b); //input angka 2
    precom(); //fungsi precom
    n=b-a; //hasil pengurangan angka 2 – angka 1
    for (c = 61; c >= 0; c--)
    {
        k = n >> c; //menggeser biner / dibagi 2
        if (k & 1)
            printf("%lld\n",z[c]); //print hasil
    }
    return 0;
}
