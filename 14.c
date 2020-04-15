#include<stdio.h>

int main () {
int i,j,k,n,u,v,m,p,q,r,s,t;
scanf("%d %d", &m, &n); //input ordo 1
int
x[m][n];
for (i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&x[i][j]); //input matriks 1
}
}
scanf("%d %d", &p, &q); //input ordo matriks kedua
int y[p][q];
for (i=0;i<p;i++){
for(j=0;j<q;j++){
scanf("%d",&y[i][j]); //input matriks kedua
}
}
int z[m][q];
for (i=0;i<m;i++){ //fungsi perkalian matriks
for(j=0;j<q;j++){
z[i][j]=0;
for(k=0;k<p;k++){
z[i][j]+= x[i][k]*y[k][j];
}
}
}
for (i=0;i<m;i++){
for(j=0;j<q;j++){
printf("%d",z[i][j]); //print matriks yg dikalikan
if(j<q-1){
printf(" "); //print spasi tiap angka
}
else printf("\n"); //print enter tiap ganti baris
}
}
return 0;
}
