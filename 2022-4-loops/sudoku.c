//
// Created by Gary on 2022/10/21.
//
#include<stdio.h>
#define MAX 9
int main(){
    int sudo[MAX][MAX] = {0};
    //建立二维数组
    int count[10]={0};
    //桶计数
    for(int row=0;row<MAX;row++){
        for(int col=0;col<MAX;col++){
            scanf("%d",&sudo[row][col]);
        }
    }
    //录入9*9的整数列表
    int status=1;
    for(int row=0;row<MAX;row++){
        for(int col=0;col<MAX;col++){
            count[sudo[row][col]]++;
        }
        for(int i=1;i<10;i++){
            if(!count[i]){
                status=0;
                break;
            }
            count[i]=0;
        }
        //检查是否为一并清零
    }
    for(int i=1;i<10;i++){
        count[i]=0;
    }
    //检查每一行
    for(int col=0;col<MAX;col++){
        for(int row=0;row<MAX;row++){
            count[sudo[row][col]]++;
        }
        for(int i=1;i<10;i++){
            if(!count[i]){
                status=0;
                break;
            }
            count[i]=0;
        }
        }
    for(int i=1;i<10;i++){
        count[i]=0;
    }
    //检查每一列
    int num_1 = 0;
    int num_2 = 0;
    while(num_2!=9){
        for (int row = num_1; row < num_1 + 3; row++) {
            for (int col = num_2; col < num_2 + 3; col++) {
                count[sudo[row][col]]++;
            }
        }
        for (int i = 1; i < 10; i++) {
            if (!count[i]) {
                status = 0;
                break;
            }
        }
        for(int i=1;i<10;i++){
            count[i]=0;
        }
        if (num_1 != 6) {
            num_1 += 3;
        }else{
            num_2 += 3;
            num_1 = 0;
        }
    }
    //检查小九宫格
    if(status){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}