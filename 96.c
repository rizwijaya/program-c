#include<stdio.h>

int main()
{
    int result,n,x;
    printf("Bilangan faktorial = ");
    scanf("%d",&n); //input angka yang difaktorial
    x=n;
    result=1;
    while(n>1)
    {
        result=result*n; //angka dikali angka-1
        n--;
    }
    printf("N = %d\n",x); //print angka faktorial
    printf("N! = %d",result); //print hasil
    return 0;
}
