#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,flag,j,lenght;
    char x[10000];
    scanf("%d",&a); //input test case
    while(a--)
    {
        scanf("%s",&x); //input string
        lenght=2; //panjang awal string 2 yang dicek
        if(x[0]<97)  //jika huruf kecil di string ke 0
        {
            flag=1; //beri flag
        }
        else
            flag=0; //jika huruf besar flag=0
        for(i=1; i<strlen(x); lenght++) //perulangan - panjang string x
        {
            for(j=0; j<lenght && i< strlen(x); j++,i++)
            {
                if(flag==1 && x[i]<97)
                    x[i] = x[i]+32;
//jika flag 0 dan array x huruf kecil, ditmbh 32 menjadi huruf besar
                if(flag==0 && x[i]>=97)
                    x[i] = x[i]-32;
//jika flag 1 dan array x huruf besar, dikurang 32 menjadi huruf kecil
            }
            flag=(flag+1)%2; //setiap pindah huruf, flag diubah
        }
        printf("%s\n",x); //print hasil string yg sdh diubah
    }
}
