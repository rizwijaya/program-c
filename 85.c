#include<stdio.h>

//program mencari eliminasi gauss
int main()
{
    int i,j,k,n;
    float m[20][20],c,x[10];
    scanf("%d",&n); //input brp persamaan
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            scanf("%f",&m[i][j]); //input per persamaan
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)  //jika anga i tidak sama dgn j
            {
                c=m[i][j]/m[j][j]; //array i ke j dibagi array j ke j
                for(k=1; k<=n+1; k++)
                {
                    m[i][k]=m[i][k]-c*m[j][k]; //kemudian dikurangi hasil kali m
                }
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        x[i]=m[i][n+1]/m[i][i]; //array x adalah array m ke n+1 dibagi i
        printf("X%d = %.2f\n",i-1,x[i]); //Print hasil
    }
    return(0);
}
