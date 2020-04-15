#include<stdio.h>

int main ()
{
    int n;
    printf("Tuliskan Angka n = ");
    scanf("%d", &n); //input nilai
//konversi nilai angka ke huruf
    if(n>=81 && n<=100)
        printf("A");
    else if(n>=71 && n<=80)
        printf("AB");
    else if(n>=66 && n<=70)
        printf("B");
    else if(n>=61 && n<=65)
        printf("BC");
    else if(n>=56 && n<=60)
        printf("C");
    else if(n>=41 && n<=55)
        printf("D");
    else if(n>=0 && n<=40)
        printf("E");
    else
        printf(".");
}
