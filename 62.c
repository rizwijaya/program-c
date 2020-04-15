#include<stdio.h>

int main()
{
    int a,b=0,c,i,j;
    int x[10000];
    scanf("%d",&a); //input test case
    for(i=0; i<a; i++)
    {
        scanf("%d",&x[i]); //input array note
    }
    if(x[0]%2==0)  //jika note pertama bisa di mod 2
    {
        for(i=1; i<a; i+=2)
        {
            if(x[i]%2==0)  //jika note bisa di mod 2
            {
                b++;
                break; //flag + break
            }
        }
        for(i=2; i<a; i+=2)
        {
            if(x[i]%2==1)  //jika note di mod 2 == 1
            {
                b++;
                break; //b ditambah dan break
            }
        }
    }
    if(x[0]%2==1)  //jika note pertama di mod 2 = 1
    {
        for(i=1; i<a; i+=2)
        {
            if(x[i]%2==1)  //jika note berikutnya di mod 2=1
            {
                b++;
                break; //tandai dan break
            }
        }
        for(i=2; i<a; i+=2)
        {
            if(x[i]%2==0)  //jika array berikutnya dimod 2= 0
            {
                b++;
                break; //tandai b dan break
            }
        }
    }
    if(b!=0)
        printf("0\n");
//jika tanda b tidak sm dengan 0, print 0 (tdk suka)
    else
        printf("1\n");
//jika tanda b sm dengan 0, print 1 (note disukai)
}
