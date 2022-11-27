//
// Created by Gary on 2022/11/16.
//
#include<stdio.h>
double VA,VB,VC,a,b,c,a0,b0,c0;
int result=0;
void pour_AtoB();
void pour_AtoC();
void pour_BtoA();
void pour_BtoC();
void pour_CtoA();
void pour_CtoB();
int right();
void pour(int k);
int main(){
    int k;

    scanf("%d",&k);
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf",&VA,&VB,&VC,&a,&b,&c,&a0,&b0,&c0);

    pour(k);
    if(result==0){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}
void pour_AtoB(){
    if(a+b>VB){
        a=0;
        b=VB;
    }
    else{
        b+=a;
        a=0;
    }
}
void pour_AtoC(){
    if(a+c>VC){
        a=0;
        c=VC;
    }
    else{
        c+=a;
        a=0;
    }
}
void pour_BtoA(){
    if(a+b>VA){
        b=0;
        a=VA;
    }
    else{
        a+=b;
        b=0;
    }
}
void pour_BtoC(){
    if(b+c>VC){
        c=VC;
        b=0;
    }
    else{
        c+=b;
        b=0;
    }
}
void pour_CtoA(){
    if(c+a>VA){
        a=VA;
        c=0;
    }
    else{
        a+=c;
        c=0;
    }
}
void pour_CtoB(){
    if(c+b>VB){
        b=VB;
        c=0;
    }
    else{
        b+=c;
        c=0;
    }
}
int right(){
    if(a==a0&&b==b0&&c==c0){
        return 1;
    }
    else{
        return 0;
    }
}
void pour(int k){
    double ta=a;
    double tb=b;
    double tc=c;
    if(k==0){
        result+=right();
        return;
    }else{
        pour_AtoB();
        result+=right();
        pour(k-1);
        a=ta;b=tb;c=tc;

        pour_AtoC();
        result+=right();
        pour(k-1);
        a=ta;b=tb;c=tc;

        pour_BtoA();
        result+=right();
        pour(k-1);
        a=ta;b=tb;c=tc;

        pour_BtoC();
        result+=right();
        pour(k-1);
        a=ta;b=tb;c=tc;

        pour_CtoA();
        result+=right();
        pour(k-1);
        a=ta;b=tb;c=tc;

        pour_CtoB();
        result+=right();
        pour(k-1);
        a=ta;b=tb;c=tc;
    }
}