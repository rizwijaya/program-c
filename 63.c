#include<stdio.h>
#include<string.h>

int arr[1000001];
long long N=10;
int exponentiation(long long base,long long exp)  // fungsi exponen
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base % N;
    long int t = exponentiation(base, exp / 2);
    t = (t * t) % N;
// if exponent is even value
    if (exp % 2 == 0)
        return t;
// if exponent is odd value
    else
        return ((base % N) * t) % N;
}
void precomp()  //fungsi simpan dalam array
{
    long long i;
    arr[0]=0;
    for(i=1; i<=1000000; i++)
    {
        arr[i]=(arr[i-1]+exponentiation(i,i))%10; //hasil jumlah pangkat
    }
}
int main()
{
    int a,b;
    memset(arr,0,sizeof(arr)); //mereset semua nilai arr = 0
    precomp(); //menjalankan fungsi precom
    scanf("%d",&a); //input test case
    while(a--)
    {
        scanf("%d",&b);//input angka
        printf("%d\n",arr[b]); //langsung print arr ke angka
    }
}
