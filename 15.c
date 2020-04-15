#include<stdio.h>

int main(){
int T,N,a,b;
scanf("%d",&T); //input testcase
while (T--){
scanf("%d",&N); //input angka
if (N==0) printf("%d\n",N); //jika 0 lgs print
else {
while (N%10==0){
//untuk menghilangkan 0 diblkg angka sblm dibalik
N=N/10; //angka dibagi 10
}
while (N>0){ //dibalik semua bilangannya hingga >0
b=N%10; //di modulo utk mengetahui angka belakangnya
N=N/10; //dibagi sepuluh
printf("%d",b); //diprint
}
printf("\n");
}
}
return 0;
}
