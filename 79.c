#include<stdio.h>
#include<string.h>

int main()
{
    int basket[8];
    int arr[]= {1,2,3,5,6,7,4,3,3,1,3,1,5,1,5,1,4,5}; //isi array
    memset(basket,0,sizeof(basket)); //mengeset array basket menjadi 0
    int i;
    printf("%d %d\n",sizeof(arr),sizeof(int)); //print ukuran array
    for(i=0; i<(sizeof(arr)/sizeof(int)); i++)
    {
//bagi ukuran array dan ukuran integer sebagai batas
        basket[arr[i]]++; //tambah array basket
    }
    for(i=0; i<=7; i++)
        while(basket[i]--)
            printf("%d",i); //print data yang sudah disort
}
