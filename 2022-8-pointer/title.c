//
// Created by Gary on 2022/11/19.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *news= malloc(4096*sizeof(*news));
    int is_first = 1;
    int count=0;
    for(int i=0;i<4096;i++) {
        *(news + i)=getchar();
        if (*(news + i) != '\n') {
            if (is_first) {
                if (*(news + i) >= 'a' && *(news + i) <= 'z') {
                    *(news + i) += 'A' - 'a';
                }
                is_first = 0;
                continue;
            } else {
                if (*(news + i) >= 'A' && *(news + i) <= 'Z') {
                    *(news + i) += 'a' - 'A';
                } else if (*(news + i) == ' ') {
                    is_first = 1;
                }
            }
        }
        else{
            count=i;
            break;
        }
    }
    for(int i=0;i<count;i++){
        printf("%c",*(news+i));
    }

    free(news);
    return 0;
}
