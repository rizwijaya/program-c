#include<stdio.h>
#include<math.h>

int main()
{
    int a,d,x1,y1,x2,y2,m,n,o;
    int i,j;
    scanf("%d",&a); //input test case
    for(i=1; i<=a; i++)
    {
        scanf("%d %d %d",&x1,&y1,&d); //input titik pusat dan jari”
        scanf("%d %d",&x2,&y2); //input letak titik
        m=pow((x2-x1),2); //kuadrat dari letak titik dgn titik pusat
        n=pow((y2-y1),2);
        o=sqrt(m+n); //akar kuadrat dari penjumlahan kedua titik kuadrat
        if(o>d)
            printf("Kasus #%d: LUAR\n",i);
//jika lbh dr jari” maka letak titik di luar
        else if(o<d)
            printf("Kasus #%d: DALAM\n",i);
//jika kurang dr jari” maka letak titik di dalam
        else if(o==d)
            printf("Kasus #%d: GARIS\n",i);
//jika letak titik sama dengan jari” maka letak titik di garis
    }
}
