//
// Created by Gary on 2022/10/29
//
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            num[i][j]=0;
        }
    }

    int i=0;
    int j=(n-1)/2;
    num[i][j]=1;
    int count = 2;
    while(count<=n*n){
        if(i-1>=0&&j+1<n){
            if(num[i-1][j+1]==0) {
                i--;
                j++;
                num[i][j]=count;
            }else{
                i++;
                num[i][j]=count;
            }
            count++;
        }else if(i-1<0&&j+1<n){
            if(num[n-1][j+1]==0){
                i=n-1;
                j++;
                num[i][j]=count;
            }else{
                i++;
                num[i][j]=count;
            }
            count++;
        }else if(i-1>=0&&j+1>=n){
            if(num[i-1][0]==0){
                i--;
                j=0;
                num[i][j]=count;
            }else{
                i++;
                num[i][j]=count;
            }
            count++;
        }else if(i-1<0&&j+1>=n){
            if(num[n-1][0]==0){
                i=n-1;
                j=0;
                num[i][j]=count;
            }else{
                i++;
                num[i][j]=count;
            }
            count++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

