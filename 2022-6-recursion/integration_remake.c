//
// Created by Gary on 2022/11/17.
//
#include<stdio.h>
#include<math.h>
#define N 0.0001
double calculate1(int num[],double a,double b,int n,int p);
double calculate(int num[],double a,double b,int n,int p,double e);
double f(int num[],double op,int n,int p);
double integer(double f0,int p);
int main() {
    int n,p;
    double a, b;
    scanf("%d%d", &n, &p);
    int num[n + 1];
    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%lf%lf", &a, &b);

    double result = calculate(num, a, b, n, p, N);
    printf("%lf", result);
    return 0;
}
double calculate(int num[],double a,double b,int n,int p,double e){
    double mid=(a+b)/2;
    double SL,S,SR;
    double result,result1,result2;
    SL = calculate1(num,a,mid,n,p);
    SR = calculate1(num,mid,b,n,p);
    S = calculate1(num,a,b,n,p);
    if(fabs(SL+SR-S)<=15*e){
        result = SL+SR+(SL+SR-S)/15;
        return result;
    }
    else{
        result1=calculate(num,a,mid,n,p,e/2);
        result2= calculate(num,mid,b,n,p,e/2);
        result = result1+result2;
        return result;
    }
}
double calculate1(int num[],double a,double b,int n,int p){
    double mid=(a+b)/2;
    return (4*f(num,mid,n,p)+f(num,a,n,p)+f(num,b,n,p))/6*(b-a);
}
double f(int num[],double op,int n,int p){
    double result=0,x=1;
    for(int i=0;i<n+1;i++){
        result += num[i]*x;
        x *= op;
    }
    result = integer(result,p);
    return result;
}
double integer(double f0,int p){
    switch(p) {
        case 1:
            return f0;
        case 2:
            return (f0*f0);
        case -1:
            return 1/f0;
        case -2:
            return 1/(f0*f0);
    }
}