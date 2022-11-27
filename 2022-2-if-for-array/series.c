//
// Created by Gary on 2022/10/7.
//
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x,y=0.0;

    scanf("%lf %d",&x,&n);

    for(int i = 0;i<=n;i++){
        y += 4*pow(-1,i)*pow(x,2*i+1)/(2*i+1);
    }

    printf("%.10lf",y);

    return 0;
}