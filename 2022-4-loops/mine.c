//
// Created by Gary on 2022/10/21.
//
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char mine[n+2][n+2];

    for(int i=0;i<n+2;i++){
        for(int j=0;j<n+2;j++){
            mine[i][j]='o';
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            mine[i][j]=getchar();
        }
        getchar();
    }
//preparation done
for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
        if(mine[i][j]!='*'){
            mine[i][j]=0;
            int count=(mine[i-1][j-1]=='*')+
                    (mine[i-1][j]=='*')+
                    (mine[i-1][j+1]=='*')+
                    (mine[i][j-1]=='*')+
                    (mine[i][j+1]=='*')+
                    (mine[i+1][j-1]=='*')+
                    (mine[i+1][j]=='*')+
                    (mine[i+1][j+1]=='*');
            mine[i][j]=count;
        }
    }
}

for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
        if(mine[i][j]=='*'){
            putchar(mine[i][j]);
        }else{
            printf("%d",mine[i][j]);
        }
    }
    printf("\n");
}

    return 0;
}
/*如果你觉得统计周围地雷数量实现起来比较复杂，可以观察下面一段演示代码，该代码在 count 变量中统计了 (i, j) 位置上下左右 '?' 的数量

int vectors[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int count = 0;
for (int k = 0; k < 4; ++k) {
    int newI = i + vectors[k][0];
    int newJ = j + vectors[k][1];
    if (arr[newI][newJ] == '?') {
        count++;
    }
}
你可以通过修改 vectors 变量和 if 语句的条件来完成统计周围所有地雷数量的任务。（注意边界！）*/