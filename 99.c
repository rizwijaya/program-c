#include<stdio.h>

int main ()
{
    int i, j, t;
    scanf("%d", &t); //input ordo
    int mabok[t][t];
    for (i=0; i<t; i++)
    {
        for(j=0; j<t; j++)
        {
            scanf("%d",&mabok[i][j]); //input isi matriks
        }
        getchar(); //mengambil enter
    }
    for (i=0; i<t; i++)
    {
        for(j=0; j<t; j++)
        {
            if(j<t-1)
            {
                printf("%d ",mabok[j][i]);
//print matriks transpose dengan spasi
            }
            else
                printf("%d",mabok[j][i]); //print matriks transpose
        }
        printf("\n"); //print enter
    }
}
