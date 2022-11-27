//
// Created by Gary on 2022/11/8.
//
#include<stdio.h>
#include<math.h>
#define N 0.0001
double integration(int ai[],double low,double high,int m,double q,double wr);
double act(int op[],double l,double h,double r,int o);
int main(){
    int n;
    int num[n+1];
    double a,b,p;
    scanf("%d%lf",&n,&p);
    for(int i=0;i<n+1;i++){
        scanf("%d",&num[i]);
    }
    scanf("%lf%lf",&a,&b);

    double result=integration(num,a,b,n,p,N);
    printf("%lf\n",result);
    double S,SL,SR;
    S=act(num,a,b,p,n);
    SL=act(num,a,(a+b)/2,p,n);
    SR=act(num,(a+b)/2,b,p,n);
    printf("S:%f\nSL:%f\nSR:%f\n%f",S,SL,SR,SL+SR+(SL+SR-S)/15);
    return 0;
}
double integration(int ai[],double low,double high,int m,double q,double wr){
    double mid=(low+high)/2;
    double S,SL,SR,result,result_1,result_2;
    S = act(ai,low,high,q,m);
    SL = act(ai,low,mid,q,m);
    SR = act(ai,mid,high,q,m);
    if(fabs(SL+SR-S)<=15*wr){
        result = SL+SR+(SL+SR-S)/15;
        return result;
    }
    else{
        result_1=integration(ai,low,mid,m,q,wr/2);
        result_2=integration(ai,mid,high,m,q,wr/2);
        result = result_1 + result_2;
        return result;
    }
}
double act(int op[],double l,double h,double r,int o){
    double result=0,temp_1=0,temp_2=0,temp_3=0,mid=(l+h)/2;
    for(int i=0;i<o+1;i++){
        temp_1 += op[i]*pow(l,i);
        temp_2 += op[i]*pow(h,i);
        temp_3 += op[i]*pow(mid,i);
    }
    result = (pow(temp_1,r)+pow(temp_2,r)+4*pow(temp_3,r))/6*(h-l);
    return result;
}

