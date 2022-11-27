//
// Created by Gary on 2022/11/8.
//
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for(int i=0;i<n;i++){
        int low=i,high=i;
        while(num[low-1]<=num[i]&&low-1>=0){
            low--;
        }
        while(num[high+1]<=num[i]&&high+1<n){
            high++;
        }
        printf("%d %d\n",low+1,high+1);
    }
    return 0;
}