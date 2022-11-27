//
// Created by Gary on 2022/11/6.
//
#include<stdio.h>

int pascal(int n,int m);
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);

    result = pascal(a,b);
    printf("%d",result);

    return 0;
}
int pascal(int n,int m) {
    int num;
    if (m - 1 > 0 && m <n ) {
        num = pascal(n - 1, m - 1) + pascal(n - 1, m);
    }
    if(m - 1==0 || m==n){
        return 1;
    }
    return num;
}