#include<stdio.h>

int main ()
{
    int N, sisa, biner=0, i=0;
    printf("Masukkan Bilangan Desimal : ");
           scanf("%d",&N); //input desimal
           while (N!=0 && N>0)   //diulang jika bilangan lebih dari nol
{
    sisa=N%2; //bilangan dimod 2
    N=N/2; //bilangan dibagi 2
    biner=biner+(sisa*i); //biner = sisa hasil modnya dikali i
        i=i*10; //i untuk penanda satuan, puluhan, ratusan dst
    }
    printf("%d", biner); //print biner
    return 0;
}
