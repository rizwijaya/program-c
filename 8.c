#include<stdio.h>

int main(){
int N;
scanf("%d",&N);
if (N>0) printf("positif\n"); //jika angka lbh bsr dr 0, maka positif
else if (N<0) printf("negatif\n"); //jika angka lbh kcl dr 0, negatif
else
printf("nol\n"); //jika angka = 0
return 0;
}
