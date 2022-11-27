//
// Created by Gary on 2022/11/6.
//
#include<stdio.h>
int cat(int x);
int main(){
    int n,result;
    scanf("%d",&n);

    result = cat(n);

    printf("%d",result);

    return 0;
}
int cat(int x){
    int num;
    if(x==1){
        return 1;
    }
    else if(x==2){
        return 2;
    }else{
        num = cat(x-1) + cat(x-2);
    }
    return num;
}