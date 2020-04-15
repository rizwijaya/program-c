#include<stdio.h>
#include<math.h>

int main(){
int T,N,a,b,c;
while (scanf("%d",&N)!=EOF){ //input sampai EOF
c=1;
if (N>0){ //jika angka lbh dr 0
for(b=2;b<=sqrt(N);b++){ //fungsi mencari bil prima
c=N%b;
if(c==0){
//jika bs dimod dgn angka sampai akar angka tersebut, di break artinya bkn prima
break;
}
}
if(c==0||N==1){
printf("TIDAK\n");
}
else if(c!=0||N!=1){
printf("YA\n");
}
}
else
printf("TIDAK\n
}
return 0;
}
