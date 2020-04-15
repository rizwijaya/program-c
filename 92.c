#include<stdio.h>

int main()
{
    int n,i,j;
    char r,v,z=0,y=0;
    scanf("%d",&n); //input ordo
    int x[n][n];
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&x[i][j]); //input angka matriks
        }
    }
    int m[n][n];
    while(y!='z')
    {
        scanf("\n%c",&y); //input char untuk rotasi (right dan flip
        if(y=='r')
        {
            scanf("\n%c",&z); //r untuk right
            if(z=='r')
            {
                for (i=0; i<n; i++)
                {
                    for (j=0; j<n; j++)
                    {
                        m[i][j]=x[n-j-1][i]; //transpose right
                        printf("%d ",m[i][j]);
                    }
                    printf("\n");
                }
            }
            else if(z=='l')  //rotasi ke kiri
            {
                for (i=0; i<n; i++)
                {
                    for (j=0; j<n; j++)
                    {
                        m[i][j]=x[j][n-i-1];
                        printf("%d ",x[j][n-i-1]);
                    }
                    printf("\n");
                }
            }
            else if(z=='z')
                break;
//input z untuk break
            else
            {
                printf("YANG BENER WOY!\n");
            }
        }
        else if(y=='f')
        {
            scanf("\n%c",&z); //input flip
            if(z=='h')  //input h untuk horizontal
            {
                for (i=0; i<n; i++)
                {
                    for (j=0; j<n; j++)
                    {
                        printf("%d ",x[n-i-1][j]);
                        m[i][j]=x[n-i-1][j];
                    }
                    printf("\n");
                }
            }
            else if(z=='v')  //input flip vertical
            {
                for (i=0; i<n; i++)
                {
                    for (j=0; j<n; j++)
                    {
                        printf("%d ",x[i][n-j-1]);
                        m[i][j]=x[i][n-j-1];
                    }
                    printf("\n");
                }
            }
            else if(z=='z')
                break;
//input z untuk break
            else
            {
                printf("YANG BENER WOY!\n");
            }
        }
        else if(y=='z')
            break;
        else
        {
            printf("YANG BENER WOY!\n");
        }
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                x[i][j]=m[i][j];
            }
        }
    }
    return 0;
