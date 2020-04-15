#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,i,j,k,h,t,g=0;
    char d;
    scanf("%d %d",&a,&b);
    char z[100001];
    scanf("%s",&z);
    t=strlen(z);
    if(t==a)
    {
        h=0;
        for(j=0,k=t-1; j<=((t-1)/2); j++,k--)
        {
            if(z[j]!=z[k])
            {
                h++;
            }
        }
        for(i=0; i<b; i++)
        {
            scanf("%d %c",&c,&d);
            if(z[c]!=z[t-c-1])
            {
                z[c]=d;
                if(z[c]==z[t-1-c])
                {
                    h--;
                }
            }
            else if(z[c]==z[t-c-1])
            {
                z[c]=d;
                if(z[c]!=z[t-1-c])
                {
                    h++;
                }
            }
            if(h>0)
                printf("BUKAN\n");
            else
                printf("YA\n");
        }
    }
    return 0;
}
