#include<stdio.h>
#include<string.h>

int main()
{
    char x[1001];
    int i;
    scanf("%s",&x); //input string
    if(x[0]=='Q'||x[0]=='W'||x[0]=='E'||x[0]=='R'||x[0]=='T'||x[0]=='Y'||x[0]
            =='U'||x[0]=='I'||x[0]=='O'||x[0]=='P'||x[0]=='A'||x[0]=='S'||x[0]=='D'||x[0]=='F'
            ||x[0]=='G'||x[0]=='H'||x[0]=='J'||x[0]=='K'||x[0]=='L'||x[0]=='Z'||x[0]=='X'||x
            [0]=='C'||x[0]=='V'||x[0]=='B'||x[0]=='N'||x[0]=='M')
    {
//jika string ke 0 huruf besar
        printf("%s",x); //langsung print string
    }
    else
    {
        printf("%c",(x[i]-32));
//jika huruf kecil, maka dikurang 32,menjadi huruf besar
        for(i=1; i<strlen(x); i++)
        {
            printf("%c",x[i]); //print string stlh diubah
        }
    }
    printf("\n"); //beri enter
}
