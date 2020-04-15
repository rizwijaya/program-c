#include<stdio.h>

int main()
{
    int a=0,b=1,c,n;
    c=a+b;
    printf("Bilangan Fibonacci\n");
    printf("Masukkan angka: ");
    scanf("%d",&n); //input angka fibonacci
    while(n!=0)
    {
        printf("%d ",b);
        a=b; //swap
        b=c;
        c=a+b; //jumlah a dan b
        n-=1; //n dikurang 1
    }
    return 0;
}
