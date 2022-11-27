//
// Created by Gary on 2022/11/18.
//
#include<stdio.h>
void rotate(char operation[],int a,int b,int c,int n);
int main(){
    int a,b,c;
    char operation[1001]={'0'};
    scanf("%d%d%d",&a,&b,&c);
    getchar();
    int n=0;
    while((operation[n] = getchar())!='\n'){
        n++;
    }
    rotate(operation,a,b,c,n);

    return 0;
}
void rotate(char operation[],int a,int b,int c,int n){
    int x1=0,x2=a,y1=0,y2=b,x=a,y=b,h=c,temp;
    for(int i=0;i<n;i++){
        switch(operation[i]){
            case 'W':
                x2=x1;
                x1=x1-h;
                temp=h;
                h=x;
                x=temp;
                break;
            case 'S':
                x1=x2;
                x2=x2+h;
                temp=h;
                h=x;
                x=temp;
                break;
            case 'A':
                y2=y1;
                y1=y1-h;
                temp=h;
                h=y;
                y=temp;
                break;
            case 'D':
                y1=y2;
                y2=y2+h;
                temp=h;
                h=y;
                y=temp;
        }
    }
    printf("%d %d %d %d",x1,x2,y1,y2);
}