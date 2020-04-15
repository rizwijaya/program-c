#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,i,j,k;
    scanf("%d",&a); //input test case
    while(a--)
    {
        d=0;
        e;
        scanf("%d",&b); //input jumlah array 2 pangkat b
        for(i=1; i<=pow(2,b); i++)
        {
            scanf("%d",&c); //input data power
            if(d<c)  //jika d < c maka ambil nilai i nya
            {
                d=c;
                e=i;
            }
        }
        printf("%d\n",e); //print nilai i
    }
}
