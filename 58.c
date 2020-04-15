#include<stdio.h>

void sort(long long arr[],long long left,long long right)  //fungsi sorting
{
    long long i=left,j=right,data=(arr[right]+arr[left])/2;
    while(i<=j)
    {
        while(arr[i]<data)
            i++;
        while(arr[j]>data)
            j--;
        if(i<=j)
        {
            long long temp=arr[i];
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
    long long i,j,a,b,c,d;
    long long sum=0;
    long long x[10000];
    scanf("%lld",&a); //input test case
    for(i=0; i<a; i++)
    {
        scanf("%lld",&x[i]); //input data array
        sum=sum+x[i]; //jumlah data
    }
    sort(x,0,a-1); //sort data
    d=sum/a; //mencari rata-rata data
    j=0;
    while(x[j]<=d && j<a)
    {
        j++;
//jika data kurang dari rata-rata dan tidak melebihi jum array
    }
    printf("%lld\n",x[j-1]); //print array ke j-1
}
