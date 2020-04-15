#include<stdio.h>

int main()
{
    long long a1,a2,b,c,sum,kapal;
    scanf("%lld%lld%lld%lld%lld",&a1,&a2,&b,&c,&kapal);
//input berat pasangan a, dan dua penumpang lain serta berat maks pd kapal
    sum=a1+a2+b+c; //jumlah berat semua penumpang
    if(sum<=kapal)
        printf("0\n"); //jika jumlah kurang dari berat kapal
    else if((a1+a2)>kapal)
        printf("NEXT QUEUE\n");
//jika berat pasangan melebihi berat kapal
    else if((a1+a2)<=kapal)  //jika berat pasangan kurang dari berat kapal
    {
        if((sum-b)<=kapal||(sum-c)<=kapal)
        {
//jika dikurangi salah satu penumpang selain pasangan
            if(b>c)
                printf("3\n");
//jika berat penumpang satu lbh berat dari penumpang kedua
            else
                printf("4\n");
//jika berat penumpang kedua lbh berat dari penumpang pertama
        }
        else
            printf("PERFECT RIDE\n"); //selain semua syarat
    }
    return 0;
}
