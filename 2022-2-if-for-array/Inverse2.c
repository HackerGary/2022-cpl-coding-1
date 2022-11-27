//
// Created by Gary on 2022/10/7.
//
#include<stdio.h>
int main()
{
    int i,n,k;
    char ch;


    scanf("%d",&n);
    ch = getchar();

    char group[n], store;

    if(ch == '\n') {

        for (i = 0; i < n; i++) {
            scanf("%c", &group[i]);
        }

        scanf("%d", &k);
        //数据读入完成
    }
    for(i = 0;i<(k+1)/2;i++){
        store = group[i];
        group[i] = group[k-1-i];
        group[k-1-i] = store;
    }
    //前翻转
    for(i = k;i<(n+k+1)/2;i++){
        store = group[i];
        group[i] = group[n+k-1-i];
        group[n+k-1-i] = store;
    }
    //后翻转

    for(i = 0;i<n;i++){
        printf("%c",group[i]);
    }



    return 0;
}