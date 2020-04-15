#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a); //input angka tahun
    if((a%4==0 || a%100==0) && a%400!=0)
    {
//jika bisa dibagi 4 atau 100 dan tidak bisa dibagi 400
        printf("Tahun Kabisat");
    }
    else //selain itu bukan tahun kabisat
        printf("Bukan tahun kabisat");
    return 0;
}
