#include<stdio.h>

int main()
{
    int t,l,c,x,i,j,baris,kolom;
    scanf("%d",&t); //input tes case
    for(x=1; x<=t; x++)
    {
        scanf("%d %d",&l,&c); //input baris dan kolom
        for(i=0; i<l; i++)
        {
            for(j=0; j<c; j++)
            {
                if((i+j)%2==0)
                    printf("*");
//jika baris ditambah kolom di mod 2 = 0, print *
                else
                    printf("."); //selain itu print titik
            }
            printf("\n");
        }
    }
    return 0;
}
