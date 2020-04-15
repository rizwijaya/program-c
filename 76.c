#include<stdio.h>

int main ()
{
    int a,b=0,i;
    scanf("%d",&a); //input test case
    int x[14]= {4,7,47,44,74,77,444,447,474,477,744,747,774,777}; //angka lucky
    for(i=0; i<14; i++)
    {
        if(a%x[i]==0)  //jika angka dapat dimod=0 salah satu angka lucky
        {
            b++; //ditandai
            break;
        }
    }
    if (b>0)
        printf("YES\n"); //jika dapat di mod, print yes
    else
        printf("NO\n"); //selain itu print tidak
    return 0;
}
