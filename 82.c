#include<stdio.h>
//fungsi untuk penyelesaian tower of hanoi
void towerOfHanoi(int n, char dari_tiang, char ke_tiang, char tengah_tiang)
{
    if (n == 1)
    {
        printf("Memindahkan cakram 1 dari tiang %c ke tiang %c\n", dari_t
               iang, ke_tiang);
        return;
    }
    towerOfHanoi(n-1, dari_tiang, tengah_tiang, ke_tiang);
    printf("Memindahkan cakram %d dari tiang %c ke tiang %c\n", n, dari_tian
           g, ke_tiang);
    towerOfHanoi(n-1, tengah_tiang, ke_tiang, dari_tiang);
}
int main()
{
    int n; //angka banyak cakram
    printf("Masukkan banyak cakram: ");
    scanf("%d",&n);
    if(n<=0)
        return 0;
    towerOfHanoi(n, 'A', 'C', 'B'); //nama tiang A,B,C
    return 0;
}
