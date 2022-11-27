//
// Created by Gary on 2022/11/14.
//
#include<stdio.h>
#include<math.h>
int n;
void print(char cha[][3*n+2],int m,int y,int x);
int main(){
    scanf("%d",&n);
    const int N=(int)pow(2,n);
    char assem[N+1][2*N+1];
    for(int i=0;i<N+1;i++){
        for(int j=0;j<2*N+1;j++){
            assem[i][j]=' ';
        }
    }

    print(assem,n,1,(int)pow(2,n));

    for(int i=1;i<N+1;i++){
        for(int j=1;j<2*N+1;j++){
            putchar(assem[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void print(char cha[][(int)pow(2,n+1)+1],int m,int y,int x){
    if(m==1){
        cha[y][x] = '/';
        cha[y][x+1] = '\\';
        cha[y+1][x-1] = '/';
        cha[y+1][x] = '_';
        cha[y+1][x+1] = '_';
        cha[y+1][x+2] = '\\';
    }
    else{
            print(cha,m-1,y+(int)pow(2,m-1),x-(int)pow(2,m-1));
            print(cha,m-1,y+(int)pow(2,m-1),x+(int)pow(2,m-1));
            print(cha,m-1,y,x);
    }
}
