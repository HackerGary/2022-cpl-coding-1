//
// Created by Gary on 2022/10/7.
//
#include<stdio.h>
int main()
{
    int n,i=0,max;

    scanf("%d",&n);

    max = n;
    for(;n!=1;)
    {
        if( n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3*n + 1;
        }
        if(n>max)
        {
            max = n;
        }
        i++;
    }

    printf("%d %d",i,max);
    return 0;
}