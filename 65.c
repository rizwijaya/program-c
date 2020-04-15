#include<stdio.h>

int main()
{
    int a,b,c,d,i,j,m;
    scanf("%d",&a); //input test case
    for(i=1; i<=a; i++)
    {
        c=0;
        d=0;
        scanf("%d",&b); //input jumlah permen
        for(j=0; j<b; j++)
        {
            scanf("%d",&m); //input jenis permen
            if(m==1)
                c++; //tambah c bila isi permen 1
            else if(m==2)
                d++; //tambah d bila isi permen 2
        }
        if(c%2==0 && c>0)
            printf("Case #%d: 0\n",i);
//jika jumlah permen isi 1 di mod 2 = 0 dan jumlah permen isi 1>0
        else if(c%2==1&&c>0)
            printf("Case #%d: 1\n",i);
//jika jumlah permen isi 1 di mod 2 = 1 dan jumlah permen isi 1>0
        else if(d%2==1 && c==0)
            printf("Case #%d: 2\n",i);
//jika jumlah permen isi 2 di mod 2 = 1 dan jumlah permen isi 1=0
        else if(d%2==0 && c==0)
            printf("Case #%d: 0\n",i);
//jika jumlah permen isi 2 di mod 2 = 0 dan jumlah permen isi 1=0
    }
}
