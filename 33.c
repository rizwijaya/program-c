#include<stdio.h>

int main()
{
    long long t,temp,i,a,b,hasil[10000];
    scanf("%lld",&t); //input test case
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&a,&b); //angka
        while(b>0)
        {
            temp=a%b; //a mod b
            a=b; //swab a dan b
            b=temp;
        }
        hasil[i]=a; //simpan a dalam array
    }
    for(i=1; i<=t; i++)
    {
        printf("%lld\n",hasil[i]); //print fpb yg disimpan
    }
    return 0;
}
