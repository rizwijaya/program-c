#include<stdio.h>

long long n,i;
double a,a1,min,max,rt=0;
int main(){
scanf("%lld",&n); //input testcase
scanf("%lf",&a1); //input angka pertama yg dirata-rata
max=a1; //masukkan angka pertama sebagai max dan min
min=a1;
for(i=1;i<n;i++){
scanf("%lf",&a); //input angka berikutnya hingga selesai
rt=rt+a; //jumlah semua angka
if (max<a) max=a; //cari nilai max
if (min>a) min=a; //cari nilai min
}
rt=rt+a1; //jumlah dgn angka pertama
rt=rt/n; //jum dibagi dgn banyak angka sebagai rata”
printf("%.2lf %.2lf %.2lf\n",min,max,rt); //print min,max,rata”
return 0;
}
