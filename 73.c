#include<stdio.h>

int main()
{
    float a,b,c,d;
    scanf("%f",&a); //input testcase
    while(a--)
    {
        d=0;
        scanf("%f %f",&b,&c); //input semester dan ipk
        if(b>1&&b<=8)
        {
//jika semester lebih besar dari 1 dan kurang dari sama dengan 8
            d=((c*(b-1))+(4*(8-(b-1))))/8;
//ipk dikali dengan semester-1 ditambah ipk 4 dikali sisa semester dibagi 8
        }
        else if(b==1)
            d=4; //jika msh semester satu artinya lgs ipk 4
        printf("%.2f\n",d); //print hasil d
    }
}
