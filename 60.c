#include<stdio.h>
#include<string.h>

int y[1000][1000];
int benar;
void path(int l,int m,int b,int c,char x[][1000])  //fungsi backtracking
{
    y[l][m]=1;
    if(l==0||l==b-1||m==0||m==c-1)  //batas backtracking
    {
        benar=0;
        return;
    }
    if((x[l][m+1]=='#'||y[l][m+1]==1)&&(x[l-1][m]=='#'||y[l-1][m]==1)
            &&(x[l][m-1]=='#'||y[l][m-1]==1)&&(x[l+1][m]=='#'||y[l+1][m]==1))
    {
        benar=1; //batas backtracking
        return;
    }
    if (m+1<c&&x[l][m+1]!='#'&&y[l][m+1]==0)
        path(l,m+1,b,c,x);
    if (l-1<b&&x[l-1][m]!='#'&&y[l-1][m]==0)
        path(l-1,m,b,c,x);
    if (m-1<c&&x[l][m-1]!='#'&&y[l][m-1]==0)
        path(l,m-1,b,c,x);
    if (l+1<b&&x[l+1][m]!='#'&&y[l+1][m]==0)
        path(l+1,m,b,c,x);
} //rekursif backtracking
int main()
{
    int a,b,c,l,m;
    int i,j,k;
    char x[1000][1000];
    scanf("%d",&a); //input testcase
    for(i=1; i<=a; i++)
    {
        scanf("%d %d",&b,&c); //input ordo
        memset(y,0,sizeof(y)); //set semua nilai array y = 0
        benar=0;
        getchar(); //utk mengambil enter
        for(j=0; j<b; j++)
        {
            for(k=0; k<c; k++)
            {
                scanf("%c",&x[j][k]); //input matriks char
            }
            getchar();
        }
        for(j=0; j<b; j++)
        {
            for(k=0; k<c; k++)
            {
                if(x[j][k]=='.'&&y[j][k]==0)  //jika terdpt ‘.’
                {
                    l=j; //mencatat lokasi
                    m=k;
                    path(l,m,b,c,x); //backtracking
                    if(benar==1)
                        break;
//jika sdh benar lgs break
                }
            }
            if(benar==1)
                break;
        }
        if(benar==1)
            printf("Case #%d: YA\n",i); //jika benar print ya
        else
            printf("Case #%d: TIDAK\n",i); //jika salah print tidak
    }
}
