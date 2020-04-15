#include<stdio.h>

int main()
{
    int a,b,c,x,y,z,sisa;
    printf("Masukkan detik: ");
    scanf("%d",&a); //input angka detik
    x=a/3600; //dibagi 3600 detik agar menjadi jam
    sisa=a-(x*3600); //sisanya dijadikan menit
    y=sisa/60; //dibagi 60 agar menjadi menit
    z=a-(x*3600)-(y*60); //sisanya dijadikan detik
    printf("%d jam %d menit %d detik",x,y,z); //print jam menit dan detik
    return 0;
}
