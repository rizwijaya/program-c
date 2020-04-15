#include<stdio.h>

int main()
{
    int T,N,a,b;
    scanf("%d",&T); //input test case
    for(a=0; a<T; a++)
    {
        scanf("%d",&N); //input angka
        if(N==0)
        {
            printf("%d",N);
            print angka 0 jika n=0
        }
        else
            while (N>0)
            {
                b=N%10; //di mod 10 untuk mengetahui angka belakang
                N=N/10; //angka dibalik 10
                printf("%d",b); //print pembalik angka
            }
        printf("\n");
    }
    return 0;
}
