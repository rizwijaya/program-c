#include<stdio.h>

int main()
{
    int t,l,c,x,i,j,m,n,a,b,h,w,a1,b1;
    scanf("%d",&t); //input testcase
    for(x=1; x<=t; x++)
    {
        scanf("%d %d %d %d",&l,&c,&h,&w);
//input panjang baris, kolom,tinggi dan lebar persegi
        a=h+1; //tinggi persegi ditambah 1
        b=w+1; //lebar persegi ditambah 1
        a1=(a*l)+1; //panjang baris dikali tinggi ditambah 1
        b1=(b*c)+1; //panjang kolom dikali lebar ditambah 1
        for(i=0; i<a1; i++)
        {
            for(j=0; j<b1; j++)
            {
                if(i==0||j==0||i==a1-1||j==b1-1)
                    printf("*");
//print * diujung-ujung baris dan kolom
                else if(i%a==0||j%b==0)
                    printf("*");
//print jika dimod a atau b, print *
                else
                    printf("."); //selain itu peint .
            }
            printf("\n");
//print enter untuk baris
        }
        printf("\n");
    }
    return 0;
}
