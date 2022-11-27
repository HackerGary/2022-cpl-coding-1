//
// Created by Gary on 2022/10/14.
//
#include<stdio.h>
int main() {
    int n, k, count = 0,death=0;
    scanf("%d%d", &n, &k);

    int group[n];
    for (int i = 0; i < n; i++) {
        group[i] = 1;
    }
    while (death < n - 1) {
        for (int i = 0; i < n; i++) {
            if (group[i]==1){
                count++;
            }
            if(count==k){
                count=0;
                group[i]=0;
                death++;
                printf("%d ",i+1);
            }

        }
    }
    for(int i=0;i<n;i++) {
        if (group[i] == 1) {
            printf("\n%d", i+1);
        }
    }
    return 0;
}