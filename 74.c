#include<stdio.h>

int main()
{
    float a,b,c,d,e,f;
    scanf("%f",&a); //input testcase
    while(a--)
    {
        scanf("%f %f",&b,&c); //input banyak coder non coder
        d=b*(c/100); //banyak coder dikali persen coder
        e=(100-b)*((100-c)/100);
//banyak non coder dikali persen non coder
        printf("%.2f%%\n",d+e); //print jumlah persen coder dan non coder
    }
}
