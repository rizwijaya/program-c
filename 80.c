#include<stdio.h>

void swap(int*a,int*b)  //fungsi swap
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int i,j,n=4;
    int arr[4]= {1,3,4,2}; //data
//sort dari 1-4
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]<arr[j])  //jika ada yang belum urut diswap
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    for(j=0; j<n; j++)
        printf("%d",arr[j]); //print data sort dari 1-4
    printf("\n");
//sort dari 4-1
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]>arr[j])  //jika sebelah kanan masih lebih besar
            {
                swap(&arr[i],&arr[j]); //diswap
            }
        }
    }
    for(j=0; j<n; j++)
        printf("%d",arr[j]); //print data hasil sorting
    printf("\n");//print enter akhir
}
