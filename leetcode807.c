#include <string.h>
#include <stdio.h>
int maxIncreaseKeepingSkyline(int **grid, int gridSize, int *gridColSize) {
    int answer=0;
    int addgrid[gridSize][gridSize];
    int columnmax=0;
    int linemax=0;
    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridSize; ++j) {
            if(grid[i][j]>linemax){
                linemax=grid[i][j];
            }
        }
        for (int j = 0; j < gridSize; ++j) {
            addgrid[i][j]=linemax-grid[i][j];
        }
        linemax=0;
    }
    for (int j = 0; j < gridSize; ++j) {
        for (int i = 0; i < gridSize; ++i) {
            if(grid[i][j]>columnmax){
                columnmax=grid[i][j];
            }
        }
        for (int i = 0; i < gridSize; ++i) {
            if(addgrid[i][j]>columnmax-grid[i][j])
            addgrid[i][j]=columnmax-grid[i][j];
        }
        columnmax=0;
    }
    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridSize; ++j) {
            answer+=addgrid[i][j];
        }
    }
    return answer;
}

int main() {
    int grid[4][4] = {{3, 0, 8, 4},
                      {2, 4, 5, 7},
                      {9, 2, 6, 3},
                      {0, 3, 1, 0}};
    int *p[4];
    p[0]=grid[0];
    p[1]=grid[1];
    p[2]=grid[2];
    p[3]=grid[3];
    int* gridColSize=NULL;
    int answer= maxIncreaseKeepingSkyline(p, 4, gridColSize);
    printf("%d",answer);
    return 0;
}