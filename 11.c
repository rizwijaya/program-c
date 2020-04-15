#include<stdio.h>

int x[25001];
int main(){
int i=0;
while (scanf("%d",&x[i])!=EOF){ //diulang sampai EOF
i++; //scanf array ke i
}
while (i--){
printf("%d\n",x[i]); //print array
}
return 0;
}
