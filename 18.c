#include<stdio.h>

int main(){
int n,i,a,b,c;
scanf("%d",&n); //input test case
while(n--){
scanf("%d",&i); //input angka
a=0;
b=2;
while (b<i){ //while sampai b< inputan
if(i%b==0){ //jika input di modulo b = 0
c=1; //penanda bisa di modulo
a++; //flag
}
if(a>2) break; //jika angka bisa di mod lbh dr dua kali dibreak
b++;
}
if(c==1&&a>2) printf("TIDAK\n");
//jika angka dpt di mod lbh dr dua kali print tidak
else printf("YA\n");
}
}
