#include<stdio.h>

int faktor(int);
int main()
{
    int n;
    scanf("%d",&n); //input angka faktorial
    printf("%d\n",faktor(n)); //print hasil fungsi faktorial
}
int faktor(int a)  //fungsi rekursif faktorial
{
    if(a==1)
        return 1; //jika angka=1, langsung print 1
    if(a%2==0)
    {
        a=(a/2)*faktor(a-1); //bila angka genap maka dikali fungsi faktor
    }
    else
        a*=faktor(a-1); //jika angka dikali angka sebelumnya
    return a;
}
