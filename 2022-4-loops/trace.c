//
// Created by Gary on 2022/10/22.
//
#include<stdio.h>
int main(){

    int n,m,x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    getchar();

    char map[n+2][m+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            map[i][j]='_';
        }
    }

    int count=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            map[i][j]=getchar();
            if(map[i][j]=='#'){
                count++;
            }
        }
        getchar();
    }
    printf("%d\n",count);
    count=0;
    while(map[x-1][y]=='#' || map[x+1][y]=='#' || map[x][y-1]=='#' || map[x][y+1]=='#'){
        printf("%d %d\n",x,y);
        if(map[x-1][y]=='#'){
            map[x][y]='_';
            x-=1;
            continue;
        }
        if(map[x+1][y]=='#'){
            map[x][y]='_';
            x+=1;
            continue;
        }
        if(map[x][y-1]=='#'){
            map[x][y]='_';
            y-=1;
            continue;
        }
        if(map[x][y+1]=='#'){
            map[x][y]='_';
            y+=1;
            continue;
        }
    }
    printf("%d %d\n",x,y);

    return 0;
}