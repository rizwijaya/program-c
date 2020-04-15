#include<stdio.h>

int main()
{
    int x[100000];
    int a,b,c;
    int i,j,k;
    scanf("%d",&a); //input testcase
    for(i=1; i<=a; i++)
    {
        int l=0,m=0,n=0,min=0;
        scanf("%d",&b); //input jumlah data array
        for(j=0; j<b; j++)
        {
            scanf("%d",&x[i]); //input data array
            if(x[i]==1)
                l++; //jika 1 maka flag L bertambah
            else if(x[i]==2)
                m++; //jika 2 maka flag m bertambah
            else if(x[i]==3)
                n++; //jika 3 maka flag n bertambah
        }
        if(l<=m&&l<=n)
            min=l; //mencari nilai min dari l,m atau n
        else if(m<=l&&m<=n)
            min=m;
        else if(n<=m&&n<=l)
            min=n;
        printf("Kasus #%d: %d\n",i,min); //print test case dan nilai min
    }
}
