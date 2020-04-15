#include<stdio.h>

void sort(int arr[],int left,int right)  //fungsi sorting
{
    int i=left,j=right,data=(arr[right]+arr[left])/2; //data=panjang array/2
    while(i<=j)  //diulang selama i lebih kecil dr j
    {
        while(arr[i]<data)
            i++; //jika array sudah benar, flag ditambah
        while(arr[j]>data)
            j--;
        if(i<=j)  //jika i lebih kecil
        {
            int temp=arr[i];
            arr[i]=arr[j]; //swap
            arr[j]=temp;
            i++,j--;
        }
    }
    if(left<j)
        sort(arr,left,j); //rekursi dari kiri
    if(i<right)
        sort(arr,i,right); //rekursi dari kanan
}
int main()
{
    int i,a;
    int arr[1000];
    scanf("%d",&a); //input test case
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]); //input data
    }
    sort(arr,0,a-1); //jalankan fungsi sorting
    for(i=0; i<a; i++)
    {
        printf("%d ",arr[i]); //print data setelah disorting
    }
    printf("\n"); //enter akhir
    return 0;
}
