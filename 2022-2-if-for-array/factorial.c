//
// Created by Gary on 2022/10/7.
//
#include<stdio.h>
#define m 10007
int fac(long int a);
int main()
{
    int i,n,result=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        result += fac(i);
    }

    result %= m;

    printf("%d",result);

    return 0;
}
int fac(long int a){
    int fac=1,i;

    if(a>0) {
        for (i = 1; i <= a; i++) {
            fac *= i;
            if(fac >= m){
                fac %= m;
            }
        }
    }
    return fac;
}