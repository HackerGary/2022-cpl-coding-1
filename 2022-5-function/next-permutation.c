//
// Created by Gary on 2022/10/29.
//
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int a=0;a<n;a++){
        scanf("%d",&num[a]);
    }

    int i=n-1,m=1;
    while(num[i-1]>num[i]){
        i--;
        m++;
    }
    int min=i,j=i+1;
    while(num[j]>num[i-1]&&j<n){
        min=j;
        j++;
    }

    int temp;
    temp=num[min];
    num[min]=num[i-1];
    num[i-1]=temp;

    if(m>1) {
        for (int x = n - m; x < (2 * n - m)/2; x++) {
            temp=num[2*n-m-1-x];
            num[2 * n - m - 1 - x] = num[x];
            num[x] = temp;
        }
    }

    for(int y=0;y<n;y++){
        printf("%d ",num[y]);
    }
    return 0;
}