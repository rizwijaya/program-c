#include<stdio.h>

void sort(int arr[],int left,int right)  //fungsi sort
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
    int a,b,c,d,i,j;
    int x[10000];
    scanf("%d",&a); //input test case
    while(a--)
    {
        scanf("%d",&b); //input banyak bebek
        for(i=0; i<b; i++)
        {
            scanf("%d",&x[i]); //input umur bebek
        }
        sort(x,0,b-1); //sort umur bebek
        for(i=0; i<b; i++)
        {
            printf("%d ",x[i]); //print umur bebek
        }
        printf("\n");
    }
}
