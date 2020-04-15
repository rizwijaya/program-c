#include<stdio.h>

int main () {
int i, j, t,s;
scanf("%d %d", &t,&s); //input ordo matriks
int mabok[t][s];
for (i=0;i<t;i++){
for(j=0;j<s;j++){
scanf("%d",&mabok[i][j]); //input matriks
}
}
for (i=0;i<s;i++){
for(j=0;j<t;j++){
if(j<t-1){
printf("%d ",mabok[t-j-1][i]); //print transpose matriks
}
else
printf("%d",mabok[t-j-1][i]);
}
printf("\n");
}
}
