//
// Created by Gary on 2022/11/6.
//
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int people[n+1];
    for(int i=1;i<n+1;i++){
        scanf("%d",&people[i]);
    }

    for(int i=1;i<n+1;i++){
        int j;
        j=i;
        if(i==people[i]){
            printf("%d ",i);
        }
        while(j!=people[j]){
            j=people[j];
            if(j==people[j])
                printf("%d ",j);
        }
    }
    return 0;
}