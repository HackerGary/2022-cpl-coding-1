//
// Created by Gary on 2022/11/18.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *str_s=malloc(100001 * sizeof(*str_s));
    char *str_t=malloc(100001 * sizeof(*str_t));
    int size_s=0;
    int size_t=0;
    /*
    *str_s=getchar();
    while(*(str_s + size_s) != '\n') {
        size_s++;
        *(str_s + size_s)=getchar();
    }
    *str_t=getchar();
    while(*(str_t + size_t) != '\n') {
        size_t++;
        *(str_t + size_t)=getchar();
    }*/
    fgets(str_s,100001,stdin);
    fgets(str_t,100001,stdin);
    size_s=strlen(str_s)-1;
    size_t=strlen(str_t)-1;
    //printf("%d %d\n",size_s,size_t);
    //读入S,T
    int count=0;
    while(count<size_s) {
        int flag=0;
        while (*(str_s + count) != *str_t) {
            count++;
            if(count>=size_s){
                break;
            }
        }
        if(count>=size_s){
            break;
        }
        int temp=count;
        //find the first element in S that is the same as the first element of T
        for (int i = 1; i < size_t; i++) {
            if(*(str_s + temp + 1) != *(str_t + i)){
                flag=1;
                break;
            }
            temp++;
            if(temp>=size_s){
                flag=1;
                break;
            }
        }
        if (!flag) {
            printf("%d ", count);
        }
        count++;
    }
    free(str_s);
    free(str_t);

    return 0;
}