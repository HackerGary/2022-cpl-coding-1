//
// Created by Gary on 2022/10/14.
//
#include<stdio.h>
int main(){
    int n,k,save;
    scanf("%d %d",&n,&k);
    k -= 1;
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    //读入完毕
    int r=0,l=n-1;
        while (r!=l) {
            for (r=0; (num[r] < num[k])&&r<=k; r++);
            for (l=n-1; (num[l] >= num[k])&&l>=k; l--);
            if(r>=l){
                break;
            }
            if(num[l]<num[k]&&num[r]<num[k]){
                save=num[k];
                num[r]=save;
                num[k]=num[r];
                continue;
            }
            if(num[r]>num[k]&&num[l]>=num[k]){
                save=num[k];
                num[l]=save;
                num[k]=num[l];
                continue;
            }
            save = num[r];
            num[r] = num[l];
            num[l] = save;
        }
        if(num[k-1]>=num[k]){
            save=num[k-1];
            num[k-1]=num[k];
            num[k]=save;
        }
    for(int i=0;i<n;i++) {
        printf("%d ", num[i]);
    }

    return 0;
}