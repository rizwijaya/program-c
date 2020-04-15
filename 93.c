#include<stdio.h>

int main ()
{
    int n, a, b, c, rata_rata, hasil;
    rata_rata=0;
    printf("Tuliskan Nilai n = ");
    scanf("%d", &n); //input jumlah array
    for(a=0; a<n; a++)
    {
        scanf("%d", &b); //input data array
        rata_rata=rata_rata+b; //jumlah data array
    }
    hasil=rata_rata/n; //jumlah dibagi dengan total array
    printf("%d", hasil); //print rata-rata
}
