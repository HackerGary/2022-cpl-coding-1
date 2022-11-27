//
// Created by Gary on 2022/11/18.
//
#include<stdio.h>
int main(){
    int x;
    scanf("%x",&x);
    printf("%d\n%u\n",x,x);
    int *ptr_x=&x;

    float *ptr_f=ptr_x;
    printf("%.6f\n%.3e",*ptr_f,*ptr_f);

    return 0;
}