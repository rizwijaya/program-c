#include<stdio.h>

int c;
void swap(long long *xp, long long *yp) {
//fungsi swap
long long temp = *xp;
*xp = *yp;
*yp = temp;
c++; //flag berapa kali diswap
}
void selectionsort(long long n,long long arr[]) { //fungsi selection sort
long long i, j, min_idx;
// One by one move boundary of unsorted subarray
for (i = 0; i < n-1; i++) {
// Find the minimum element in unsorted array
min_idx = i;
for (j = i+1; j < n; j++)
if (arr[j] < arr[min_idx])
min_idx = j;
// Swap the found minimum element with the first element
if(i!=min_idx)swap(&arr[min_idx], &arr[i]);
}
}
int main(){
long long n,i;
c=0;
scanf("%lld",&n); //input test case
long long data[1001];
for(i=0;i<n;i++){
scanf("%lld",&data[i]); //input data
}
selectionsort(n,data); //disort menggunakan fungsi
printf("%lld\n",c); //jumlah total swap data
}
