#include<stdio.h>

long long n,c,i,j;
void bubblesort(int data[],int n)  //fungsi bubble sort
{
    int temp,i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
                c++; //flag jumlah penukaran
            }
        }
    }
}
int main()
{
    scanf("%d",&n); //input test case
    int data[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&data[i]); //input data angka
    }
    bubblesort(data,n); //disort
    printf("%d\n",c); //hasil penukaran terkecil dari data
}
