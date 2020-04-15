#include<stdio.h>

int main(){
int N;
scanf("%d",&N);
if (N<10) printf("satuan\n"); //jika angka kurang dr 10
else if (N<100) printf("puluhan\n"); //jika angka kurang dr 100
else if (N<1000) printf("ratusan\n"); //jika angka kurang dr 1000
else if (N<10000) printf("ribuan\n"); //jika angka kurang dr 10000
else
printf("puluhribuan\n"); //angka puluhribuan
return 0;
}
