//
// Created by Gary on 2022/10/7.
//
#include<stdio.h>
#define VOLUME 1000
int main()
{
    int i,n,m;
    int num[VOLUME] = {0};

    scanf("%d",&n);

    for(i=0;i<2*n-1;i++){
        scanf("%d",&m);
        num[m]++;
    }

    for(i=0;i<VOLUME;i++){
        if(num[i] == 1){
            printf("%d",i);
        }
    }
    return 0;
}