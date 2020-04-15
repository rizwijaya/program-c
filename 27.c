#include<stdio.h>

void tukar(long long x,long long y){ //fungsi untuk swap
long long temp;
temp=x;
x=y;
y=temp;
}
void isiarray(long long n,long long gelas[]){ //fungsi utk isi array gelas
long long i;
for(i=1;i<=n;i++){
gelas[i]=i;
}
}
int main(){
long long gelas[100000];
long long bny,tkr,a,b,c,d,e;
long long temp;
scanf("%d %d",&bny,&tkr); //input posisi gelas
isiarray(bny,gelas);
for(a=0;a<tkr;a++){
scanf("%d %d",&b,&c); //input letak gelas
temp=gelas[b]; //swap
gelas[b]=gelas[c];
gelas[c]=temp;
}
scanf("%d",&d);
while(d--){ //print letak gelas
scanf("%d",&e);
printf("%d\n",gelas[e]);
}
return 0;
}
