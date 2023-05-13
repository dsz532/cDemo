#include <stdio.h>
int main (){
    int x1,y1,x2,y2,x3,y3,x4,y4,i,j;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
    int table[1000][1000];
    for (i = 0; i < 1000; i++)
    {
        for ( j = 0; j < 1000; j++)
        {
            table[i][j]=0;
        }
    }
    for (i = y1; i < y2; i++)
    {
        for ( j = x1; j < x2; j++)
        {
            table[i][j]=1;
        }
    }
    for (i = y3; i < y4; i++)
    {
        for ( j = x3; j < x4; j++)
        {
            table[i][j]=1;
        }
    }
    int counter=0;
    for (i = 0; i < 1000; i++)
    {
        for ( j = 0; j < 1000; j++)
        {
            if (table[i][j]==1)
            {
                counter++;
            }
            
        }
    }
    printf("%d",counter);
    return 0;
}