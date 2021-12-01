#include <stdio.h>
#define N 5

int solveKTUtil(int x, int y, int movei, int sol[N][N],
                int xMove[], int yMove[]);

void printSolution(int sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
        {
            printf(" %2d ", sol[x][y]);
        }
        printf("\n");
    }
}

/* A utility function to check if i,j are valid indexes
   for N*N chessboard */
int isSafe(int x, int y, int sol[N][N])
{
    printSolution(sol);
    if (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1)
    {
        printf("\nsafe\n");
    }
    else
    {
        printf("\nnot safe\n");
    }
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

/* A utility function to print solution matrix sol[N][N] */

/* This function solves the Knight Tour problem using
   Backtracking.  This function mainly uses solveKTUtil()
   to solve the problem. It returns false if no complete
   tour is possible, otherwise return true and prints the
   tour.
   Please note that there may be more than one solutions,
   this function prints one of the feasible solutions.  */
int solveKT()
{
    int sol[N][N];

    /* Initialization of solution matrix */
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    /* xMove[] and yMove[] define next move of Knight.
       xMove[] is for next value of x coordinate
       yMove[] is for next value of y coordinate */
    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    // Since the Knight is initially at the first block
    sol[0][0] = 0;

    /* Start from 0,0 and explore all tours using
       solveKTUtil() */
    if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == 0)
    {
        printf("Solution does not exist");
        return 0;
    }
    else
        printSolution(sol);

    return 1;
}

/* A recursive utility function to solve Knight Tour
   problem */
int solveKTUtil(int x, int y, int movei, int sol[N][N],
                int xMove[N], int yMove[N])
{
    int k, next_x, next_y;
    if (movei == N * N)
    {
        printf("\n movei %d\n", movei);
        return 1;
    }

    /* Try all next moves from the current coordinate x, y
     */
    for (k = 0; k < 8; k++)
    {

        printf("\n this is calling moviei=%d  k=%d\n", movei, k);
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol))
        {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei + 1, sol,
                            xMove, yMove) == 1)
            {
                printf("\n inside the if condition moviei=%d  k=%d\n", movei, k);
                return 1;
            }
            else
            {
                printf("\n Backtracking\n");
                sol[next_x][next_y] = -1;
            } // backtracking
        }
    }

    return 0;
}

/* Driver Code */
int main()
{

    // Function Call
    solveKT();
    return 0;
}