#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float x,akar1,akar2;
    printf("Persamaan kuadrat\n");
    printf("a = ");
    scanf("%d",&a); //input a
    printf("\nb = ");
    scanf("%d",&b); //input b
    printf("\nc = ");
    scanf("%d",&c); //input c
    x= b*b-4*a*c;
    if (x>=0)
    {
        akar1 = (-b+sqrt(b*b-4*a*c))/2*a; //menggunakan rumus persamaan kuadrat
        akar2 = (-b-sqrt(b*b-4*a*c))/2*a; //menggunakan rumus persamaan kuadrat
        printf("\nakar 1 = %f\n",akar1); //hasil akar pertama
        printf("akar 2 = %f\n",akar2); //hasil akar kedua
    }
    else
    {
        printf("angka imajiner"); //selain itu angka imajiner
    }
    return 0;
}
