//
// Created by Gary on 2022/10/14.
//
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //初始化数组
    int bits[n];
    for(int i=0;i<n;i++){
        bits[i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            if(j%i==0&&bits[j]==0){
                bits[j]=1;
            }else if(j%i==0&&bits[j]==1){
                bits[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(bits[i]==1){
            printf("%d ",i);
        }
    }

    return 0;
}