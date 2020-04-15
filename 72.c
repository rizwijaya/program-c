#include<stdio.h>

void sort(int arr[],int left,int right)  //fungsi sorting
{
    int i=left,j=right,data=(arr[right]+arr[left])/2;
    while(i<=j)
    {
        while(arr[i]<data)
            i++;
        while(arr[j]>data)
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
    int a,i,b=0,c;
    scanf("%d",&a); //input brp koin
    int x[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&x[i]); //input angka koin
        b=b+x[i]; //jumlah kan semua
    }
    c=b/2; //dirata-rata
    sort(x,0,a-1); //sort array data koin
    int d=0,e=0;
    for(i=a-1; i>=0; i--)
    {
        d++; //flag bertambah
        e=e+x[i]; //tambahkan terus data koin dari belakang
        if(e>c)
            break; //jika jumlah sudah lebih besar dari rata”, dibreak
    }
    printf("%d\n",d); //print jumlah flag
    return 0;
}
