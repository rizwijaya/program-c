#include <stdio.h>

int main(){
int arr[1001];
int a,n=0,m,modus=0,x,y,b;
scanf("%d",&m); //input angka
for(a=0;a<1001;a++)arr[a]=0;
for(b=0;b<m;b++){
scanf("%d",&n); //input angka yg yg akan dicari modusnya
arr[n]++;
}
int jMax=0,yMax=0;
for(x=0;x<1001;x++){
if(arr[x]>=jMax){
jMax=arr[x]; //cara menentukan modus
modus=x;
}
}
printf("%d\n",modus);
return 0;
}
