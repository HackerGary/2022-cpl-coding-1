//
// Created by Gary on 2022/11/16.
//
#include<stdio.h>
void print_up(int x,int y,int z);
void print_mid(int x,int y,int z);
void print_down(int x,int y,int z);
void print_type_1(int x);
void print_type_2(int x);
void print_type_3(int x);
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        a[i]=0;
        b[i]=0;
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        scanf("%d",&c[i]);
    }
    for(int i=0;i<n;i++){
        print_up(a[i],b[i],c[i]);
        print_mid(a[i],b[i],c[i]);
        print_down(a[i],b[i],c[i]);
    }
    return 0;
}
void print_type_1(int x){
    for(int i=0;i<x;i++){
        printf("+-");
    }
    printf("+");
}
void print_type_2(int x){
    for(int i=0;i<x;i++){
        printf("/ ");
    }
}
void print_type_3(int x){
    for(int i=0;i<x;i++){
        printf("| ");
    }
}
void print_up(int x,int y,int z){
    int Y=2*y,count=0,temp=0;
    int m=y;
    if(z<y){
        m=z;
    }
    for(int i=0;i<m;i++) {
        for (int j = 0; j < Y; j++) {
            printf(" ");
        }
        Y--;
        print_type_1(x);
        temp=count;
        while(temp>0){
            printf(" +");
            temp--;
        }
        printf("\n");
        count++;
        for (int j = 0; j < Y; j++) {
            printf(" ");
        }
        Y--;
        print_type_2(x);
        temp=count;
        while(temp>0){
            printf("/|");
            temp--;
        }
        printf("\n");
    }
}
void print_mid(int x,int y,int z){
    if(y<=z) {
        for (int i = 0; i < z - y; i++) {
            print_type_1(x);
            for (int j = 0; j < y; j++) {
                printf(" +");
            }
            printf("\n");
            print_type_3(x);
            printf("|");
            for (int j = 0; j < y; j++) {
                printf("/|");
            }
            printf("\n");
        }
        print_type_1(x);
        for (int j = 0; j < y; j++) {
            printf(" +");
        }
        printf("\n");
    }
    else {
        int Y = 2 * (y - z);
        for (int i = 0; i < y - z; i++) {
            for (int j = 0; j < Y; j++) {
                printf(" ");
            }
            Y--;
            print_type_1(x);
            for (int j = 0; j < z; j++) {
                printf(" +");
            }
            printf("\n");
            for (int j = 0; j < Y; j++) {
                printf(" ");
            }
            Y--;
            print_type_2(x);
            for(int j=0;j<z;j++){
                printf("/|");
            }
            printf("/");
            printf("\n");
        }
        print_type_1(x);
        for (int j = 0; j < z; j++) {
            printf(" +");
        }
        printf("\n");
    }
}
void print_down(int x,int y,int z){
    int m=y;
    if(z<y){
        m=z;
    }
    int count=m,temp=m;
    for(int i=0;i<m;i++){
        print_type_3(x);
        for(int j=0;j<temp;j++){
            printf("|/");
        }
        printf("\n");
        count--;
        temp=count;
        print_type_1(x);
        for(int j=0;j<temp;j++){
            printf(" +");
        }
        printf("\n");
    }
}