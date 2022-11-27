//
// Created by Gary on 2022/10/14.
//
#include<stdio.h>
int main()
{
    int count_1 = 0,max=0;
    int n;
    scanf("%d",&n);
    getchar();

    char sta[n];
    unsigned char flag[150]={0};
    int Flag[150]={0};
    int save;
    for(int i=0;i<n;i++){
        sta[i] = getchar();
        save = sta[i];
        if(flag[save]<=255)
        flag[save]++;
        Flag[save]++;
    }
    //数据读入完成
    for(int i=97;i<124;i++){
        if(flag[i]!=0) {
            if(flag[i-32]!=0){
                count_1 += 3;
            }
            else{
                count_1 += 2;
            }
        }else if(flag[i-32]!=0){
            count_1 += 2;
        }
        if(flag[i]>max){
            max=flag[i];
        }
        if(flag[i-32]>max){
            max=flag[i-32];
        }
        if(Flag[i]>max){
            max=Flag[i];
        }
        if(Flag[i-32]>max){
            max=Flag[i-32];
        }
    }
    int maximum = max;
    //统计列数和行数
    for(int i=0;i<maximum;i++) {
        for (int j = 97; j < 124; j++) {
            if (flag[j] != 0) {
                if (flag[j] < max&&Flag[j]<max) {
                    printf(" ");
                } else {
                    printf("=");
                }
                if (flag[j - 32] != 0) {
                    if (flag[j - 32] < max&&Flag[j-32]<max) {
                        printf(" ");
                    } else {
                        printf("=");
                    }
                }
                printf(" ");
            }else if(flag[j-32]!=0){
                if (flag[j - 32] < max&&Flag[j-32]<max) {
                    printf(" ");
                } else {
                    printf("=");
                }
                printf(" ");
            }
        }
        printf("\n");
        max--;
    }
    for(int i=1;i<count_1;i++){
        printf("-");
    }
    printf("\n");
    //输出字母
    for (int i = 97; i < 124; i++){
        if(flag[i]!=0) {
            printf("%c", i);
            if (flag[i - 32] != 0) {
                printf("%c ", i - 32);
            } else {
                printf(" ");
            }
        }else if(flag[i-32]!=0){
            printf("%c ",i-32);
        }
    }

    return 0;
}