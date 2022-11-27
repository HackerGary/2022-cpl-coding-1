//
// Created by Gary on 2022/10/15.
//
#include<stdio.h>
int main()
{
    int k,save;
    long n;
    scanf("%ld %d",&n,&k);
    int num[n+1];
    for(int i=1;i<n+1;i++){
        scanf("%d",&num[i]);
    }
    //读入完毕
    int mid=num[k];
    int l=1, r=n;
    do {
        for (; l != r && num[l] < mid; l++);
        for (; r != l && num[r] >= mid; r--);
        if (l != r) {
            save = num[l];
            num[l] = num[r];
            num[r] = save;
        }
    }while(l<r);
    /*if(){
        save=num[k];
        num[k]=num[];
        num[]=save;
    }*/
    int j;
    if(num[l]>mid){
        for(j=1;j<n+1&&num[j]!=mid;j++);
        save=num[j];
        num[j]=num[l];
        num[l]=save;
    }

    for(int i=1;i<n+1;i++) {
        printf("%d ", num[i]);
    }
    return 0;
}