#include<stdio.h>
#include<string.h>
//fungsi bujur sangkar ganjil

void Square(int n)
{
    int magicSquare[n][n];
//untuk mengeset semua arr menjadi 0
    memset(magicSquare, 0, sizeof(magicSquare));
//untuk meletakkan angka pertama
    int i = n/2;
    int j = n-1;
//satu per satu angka diletakkan
    int num;
    for (num=1; num <= n*n; )
    {
        if (i==-1 && j==n)  //kondisi ketiga
        {
            j = n-2;
            i = 0;
        }
        else
        {
//kondisi pertama jika angka berikutnya
//keluar dari kotak sisi kanan
            if (j == n)
                j = 0;
        }
//kondisi pertama jika angka berikutnya
//keluar dari kotak sisi atas
        if (i < 0)
            i=n-1;
    }
    if (magicSquare[i][j])  //kondisi kedua
    {
        j -= 2;
        i++;
        continue;
    }
    else
        magicSquare[i][j] = num++; //penambah jumlah
    j++;
    i--; //kondisi pertama
}
printf("Magic Square untuk n=%d:\nDengan total jumlah "
//print magic square
       "tiap baris dan kolom %d:\n\n", n, n*(n*n+1)/2);
for (i=0; i<n; i++)
{
    for (j=0; j<n; j++)
        printf("\n");
}
}
printf("%3d ", magicSquare[i][j]);
int main()
{
    int n=0;
    printf("Masukkan bil ganjil: "); //hanya ganjil
    scanf("%d",&n);
    if(n%2==0)  //untuk genap
    {
        printf("Bukan bil ganjil.\n");
        return 0;
    }
    Square (n); //menuju fungsi
    return 0;
}
