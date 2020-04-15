#include<stdio.h>
#include<string.h>

void sort(int arr[],int left,int right)  //fungsi sorting
{
    int i=left,j=right,data=(arr[right]+arr[left])/2;
    while(i<=j)
    {
        while(arr[i]>data)
            i++;
        while(arr[j]<data)
            j--;
        if(i<=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++,j--;
        }
    }
    if(left<j)
        sort(arr,left,j);
    if(i<right)
        sort(arr,i,right);
}
int main()
{
    int a,b,c,i,j,k,l,m,n;
    char x[10000];
    int y[10000];
    scanf("%d",&a); //input testcase
    while(a--)
    {
        memset(y,0,sizeof(y)); //mengeset array y dengan nilai 0
        scanf("%d %d",&b,&c); //input panjang jalan
        getchar(); //untuk mengambil enter tanpa dibaca char
        for(i=0; i<b; i++)
        {
            scanf("%c",&x[i]); //untuk input char
        }
        getchar();
        j=0;
        for(i=0; i<b; i++)
        {
            if(x[i]=='X'&&x[i+1]=='X')  //jika X dan stlhnya X maka
            {
                y[j]++; //array y ditambah
            }
            else if(x[i]=='X'&&i==b-1)  //jika X di akhir
            {
                y[j]++; //array y ditambah
            }
            else if(x[i]=='X'&&x[i+1]=='.')  //jika X kemudian .
            {
                y[j]++; //array y ditambah
                j++; //j juga ditambah untuk melewati titik
            }
        }
        sort(y,0,j); //sorting nilai y
        int sum=0;
        l=0;
        for(k=1; k<=c; k++)
        {
            sum=sum+(y[l]*k); //hasil penjumlahan y dikali dgn k
            l++; //tambah nilai l
        }
        printf("%d\n",sum); //print sum
    }
}
