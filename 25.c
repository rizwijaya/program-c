#include<stdio.h>

int main(){
int a,b,e=0,c,d,g;
int i,j;
scanf("%d %d",&a,&b); //input dua angka
g=b;
while(a>=1){
c=a%10; //di mod utk angka terbelakang
a=a/10; //lalu dibagi 10
b=g;
while(b>=1){
d=b%10; //dimod utk mengetahui angka terbelakang
b=b/10; //dibagi 10
e=e+(c*d); //dikalikan dgn angka blkg pertama
}
}
printf("%d\n",e); //print jumlah
return 0;
}
