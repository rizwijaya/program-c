#include<stdio.h>
#define N 4 //ukuran maze

int solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]);
void printSolution(int sol[N][N])  //untuk print solusi
{
    int i,j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}
//fungsi untuk memastikan sesuai ukuran maze
int isSafe(int maze[N][N], int x, int y)
{
//jika fungsi di dalam batas maze maka langsung return 1
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return 1;
//jika fungsi di luar batas maze maka langsung return 0
    return 0;
}
//fungsi maze menggunakan backtracking
int solveMaze(int maze[N][N])
{
    int sol[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    if(solveMazeUtil(maze, 0, 0, sol) == 0)
    {
        printf("Tidak ada solusi, tidak ada jalan.");
        return 0;
    }
    printSolution(sol);
    return 1;
}
//rekursi
int solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
{
// jika x, y benar return 1
    if(x == N-1 && y == N-1)
    {
        sol[x][y] = 1;
        return 1;
    }
//mengecek apakah maze benar ada
    if(isSafe(maze, x, y) == 1)
    {
//tandai jika benar
        sol[x][y] = 1;
//jika bisa berpindah ke samping kanan direturn 1
        if (solveMazeUtil(maze, x+1, y, sol) == 1)
            return 1;
//Jika tidak, pindah ke bawah jika bisa
        if (solveMazeUtil(maze, x, y+1, sol) == 1)
            return 1;
//jika tidak bisa berpindah, ditandai dengan 0
        sol[x][y] = 0;
        return 0;
    }
    return 0;
}
int main()
{
    int maze[N][N];
    int i,j;
    for(i=0; i<N; i++) //input angka 0 atau 1 sebagai nilai maze 4x4
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&maze[i][j]);
        }
    }
    solveMaze(maze); //masukkan ke fungsi
    return 0;
}
