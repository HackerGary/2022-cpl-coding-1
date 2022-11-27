//
// Created by Gary on 2022/11/6.
//
#include<stdio.h>
int murder(int sus[],int x);

int main(){
    int n;
    scanf("%d",&n);
    int peo[100005];
    for(int i=1;i<n+1;i++){
        scanf("%d",&peo[i]);
    }

    int boss;
    for(int i=1;i<n+1;i++){
        boss = murder(peo, i);
        printf("%d ",boss);
    }
    return 0;
}
int murder(int sus[],int x){
    if(x==sus[x]){
        return x;
    }else{
        int m=sus[x];
        murder(sus,m);
    }
}
