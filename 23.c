#include <stdio.h>

int main(){
long long arr[600001];
long long a,n=0,m,modus=0,x,y,b;
long long i=0;
while (scanf("%lld",&arr[i])!=EOF){ //input smpai EOF
i++;
}
long long max=0,min=arr[0];
for(x=i-1;x>=0;x--){
if(arr[x]>max) max=arr[x]; //cari nilai max dari semua angka
}
for(y=i-1;y>=0;y--){
if(arr[y]<min) //cari nilai min
min=arr[y];
}
printf("%lld\n",max-min); //print hasil pengurangan nilai max dan min
return 0;
}
