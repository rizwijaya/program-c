#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a); //input test case
    while(a--)
    {
        scanf("%d",&b); //input angka
        printf("%d\n",(b*b*2)+((b-2)*b*2)+((b-2)*(b-2)*2));
//print jum kotak atas dan bwh + samping-atas-bwh + tengah
    }
}
