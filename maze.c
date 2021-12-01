#include <stdio.h>

#define M 5
#define N 5

int display(int m, int n, int maze[m][n])
{
    int i, j;

    printf("\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("  %d  ", maze[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int Is_Safe(int x, int y, int sol[M][N])
{
    return (x >= 0 && x < M && y >= 0 && y < N && sol[x][y] == 0);
}

int Maze_Solver(int x, int y, int sol[M][N], int xMoves[], int yMoves[])
{

    int k, x_next, y_next;

    for (k = 0; k < 4; k++)
    {
        x_next = x + xMoves[k];
        y_next = y + yMoves[k];

        if (x + 1 == M && y + 1 == N)
        {
            return 1;
        }

        if (Is_Safe(x_next, y_next, sol) == 1)
        {
            sol[x_next][y_next] = 1;
            if (Maze_Solver(x_next, y_next, sol, xMoves, yMoves) == 1)
            {
                return 1;
            }
            else
            {
                sol[x_next][y_next] = 0;
            }
        }
    }

    return 0;
}

int Maze(int maze[M][N])
{
    int sol[M][N];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            sol[i][j] = maze[i][j];

    int xMoves[] = {0, 1, 0, -1},
        yMoves[] = {1, 0, -1, 0};

    if (Is_Safe(0, 0, sol) == 0)
    {
        return printf("\n no solution\n");
    }

    sol[0][0] = 1;

    if (Maze_Solver(0, 0, sol, xMoves, yMoves) == 0)
    {
        printf("\n solution does not exits\n");
    }
    else
    {
        display(M, N, sol);
    }

    return 0;
}

int main()
{
    int maze[M][N] = {{-1, -1, 0, -1, 0},
                      {0, 0, 0, -1, 0},
                      {0, -1, 0, -1, 0},
                      {0, 0, 0, -1, 0},
                      {-1, -1, 0, 0, 0}};

    Maze(maze);

    return 0;
}