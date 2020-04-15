#include<stdio.h>

int main()
{
    int t,l,c,x,i,j,m,n,a,b;
    scanf("%d",&t); //input testcase
    for(x=1; x<=t; x++)
    {
        scanf("%d %d",&l,&c); //input panjang baris dan kolom
        a=(l*3)+1; //panjang baris dikalikan 3 ditambah 1
        b=(c*3)+1; //panjang kolom dikalikan 3 ditambah 1
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                if(i==0||j==0||i==a-1||j==b-1)
                    printf("*");
//jika diujung” baris dan kolom diberi *
                else if(i%3==0||j%3==0)
                    printf("*");
//jika baris atau kolom ke tiga print *
                else
                    printf("."); //selain itu print .
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
