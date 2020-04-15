#include<stdio.h>

int main()
{
    int x,t,a,i,j,b,c,k;
    scanf("%d",&x); //input test case
    for(t=0; t<x; t++)
    {
        scanf("%d",&a); //input angka sbg tinggi
        for(i=0; i<a; i++) //fungsi segitiga atas
        {
            for(j=1; j<a-i; j++)
            {
                printf("-");
            } //print – membentuk segitiga
            for(k=0; k<=i; k++)
            {
                if(k==0)
                {
                    printf("*");
//kemudian print * di sblhnya paling luar
                }
                else
                    printf("-");
            } //selain itu print -
            for(c=1; c<=i; c++)
            {
                if(c==i)
                {
                    printf("*");
                } //untuk print * terluar
                else
                    printf("-"); //selain itu -
            }
            printf("\n");
        }
        for(i=1; i<a; i++) //fungsi untuk segitiga bawah, kebalikan diatas
        {
            for(j=1; j<i+1; j++)
            {
                printf("-");
            }
            for(k=a-i; k>0; k--)
            {
                if(k==a-i)
                {
                    printf("*");
                }
                else
                    printf("-");
            }
            for(c=a-i; c>1; c--)
            {
                if(c==2)
                {
                    printf("*");
                }
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
