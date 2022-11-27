//
// Created by Gary on 2022/11/16.
//
#include<stdio.h>
int main(){
    int n,vol;
    scanf("%d%d",&n,&vol);
    int sto[1000001];
    for(int i=0;i<1000001;i++){
        sto[i]=0;
    }
    int sr=0;
    int temp;
    int mark[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mark[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        int temp_1=mark[i];
        sto[temp_1]+=temp;
        sr+=temp;
        //sr防止vol>存量
    }
    //桶计数统计酒单价及酒量
    int price=0;
    int Max=0;

    for (int i = 1; i < 1000001; i++) {
        if (sto[i] > 0) {
            Max = i;
        }
    }
    while(vol>0&&sr>0) {
        int max=0;
        for (int i = 1; i <= Max; i++) {
            if (sto[i] > 0) {
                max = i;
            }
        }
        while (vol > 0 && sto[max] > 0) {
            price += max;
            vol--;
            sr--;
            sto[max]--;
        }
        Max--;
    }
    printf("%d",price);

    return 0;
}
