#include<stdio.h>

int faktorial(int x);
int kombinasi(int x,int y);
int permutasi(int x, int y);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("kombinasi = %d\n",kombinasi(a,b));
    printf("permutasi = %d\n",permutasi(a,b));
}
int faktorial(int x)
{
    int i,faktorial=1;
    for(i=1; i<=x; i++)
    {
        faktorial=faktorial*i;
    }
    return faktorial;
}
int kombinasi(int x, int y)
{
    int komb;
    komb=faktorial(x)/(faktorial(x-y)*faktorial(y));
    return komb;
}
int permutasi(int x, int y)
{
    int permut;
    permut=faktorial(x)/faktorial(x-y);
    return permut;
}
