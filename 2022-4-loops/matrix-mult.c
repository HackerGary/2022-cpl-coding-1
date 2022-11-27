//
// Created by Gary on 2022/10/22.
//
#include<stdio.h>
int main(){
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    getchar();
    int matrix_a[m][n],matrix_b[n][p];
    int matrix_c[m][p];


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix_a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&matrix_b[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            matrix_c[i][j]=0;
            for(int k=0;k<n;k++){
                matrix_c[i][j]+=matrix_a[i][k]*matrix_b[k][j];
            }
            printf("%d ",matrix_c[i][j]);
        }
        printf("\n");
    }
    return 0;
}