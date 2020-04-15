#include<stdio.h>

Tugas 100 codingan
int main()
{
    int a,b,c,d,e;
    int i,j,k,has;
    int x[10000],y[10000];
    int max=-1001,min=1001,max2=-1001,min2=1001;
    scanf("%d",&a); //input testcase
    for(j=1; j<=a; j++)
    {
        max=-1001,min=1001,max2=-1001,min2=1001;
        scanf("%d",&b); //input banyak data dalam array
        for(i=0; i<b; i++)
        {
            scanf("%d %d",&x[i],&y[i]); //input data array
            if(x[i]>max)
                max=x[i]; //mencari nilai x max
            if(x[i]<min)
                min=x[i]; //mencari nilai x min
            if(y[i]>max2)
                max2=y[i]; //mencari nilai y max
            if(y[i]<min2)
                min2=y[i]; //mencari nilai y min
        }
        if((max-min)>(max2-min2))
//jika selisih max dan min array x lbh besar
            has=(max-min)*(max-min);
//hasil=selisih max dan min sebagai sisi dikali sisi
        else if((max-min)<=(max2-min2))
//jika selisih max dan min array y lbh besar
            has=(max2-min2)*(max2-min2);
//hasil=selisih max dan min array y sebagai sisi dikali sisi
        printf("Case #%d: %d\n",j,has); //print test case dan hasil
    }
}
