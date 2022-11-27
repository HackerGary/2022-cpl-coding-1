//
// Created by Gary on 2022/10/29.
//
#include <stdio.h>
#include <math.h>

int main()
{
    int n,t;
    scanf("%d%d",&n,&t);

    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            sum += t*pow(10,j);
        }
    }
    printf("%d",sum);

    return 0;
}