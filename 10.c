#include<stdio.h>

int main(){
int x1,x2,y1,y2,hasil;
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
hasil = (x1-x2)+ (y1-y2);
if (hasil<0) printf("%d\n",hasil*-1); //
else printf("%d\n",hasil);
return 0;
}
