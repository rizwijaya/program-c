#include<stdio.h>

int main()
{
    int a,c;
    char b;
    while(scanf("%d %c %d",&a,&b,&c)!=EOF)  //input hingga EOF
    {
        if(b=='-')
            printf("%d\n",a-c); //operasi pengurangan
        else if(b=='+')
            printf("%d\n",a+c); //operasi pertambahan
        else if(b=='*')
            printf("%d\n",a*c); //operasi perkalian
        else if(b=='<')   //cek apakah a<b
        {
            if (a<c)
            {
                printf("benar\n");
            }
            else
                printf("salah\n");
        }
        else if(b=='>')   //cek apakah b>c
        {
            if (a>c)
            {
                printf("benar\n");
            }
            else
                printf("salah\n");
        }
        else if(b=='=')   //cek apakah a=c
        {
            if (a==c)
            {
                printf("benar\n");
            }
            else
                printf("salah\n");
        }
    }
    return 0;
}
