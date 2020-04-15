#include<stdio.h>

int main(){
long long a,c=0,i,temp;
scanf("%lld",&a); //input angka
for(i=5;i<=a;i+=5){
temp=i;
while(temp%5==0){ //mod 5
temp/=5; //dibagi 5
c++; //diflag
}
}
printf("%lld\n",c); //print flag sebagai faktorial
return 0;
}
