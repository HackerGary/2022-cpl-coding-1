//
// Created by Gary on 2022/10/24.
//
#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char space[1001]="\0";
    scanf("%s",&space);
    //printf("%s\n",space);
    //检验是否正确读入字符串

    int max;
    max = strlen(space);
    //printf("%d\n", max);
    //检验字符串的长度是否正确
    char space_new[1001]="\0";

    for (int i = 0; i < n; i++) {
        //控制模拟轮数
        for (int j = 0; j < max; j++) {
            int count_1=0,count_2=0;
            if (j >= 3 && j <= max - 4){
            count_1 =     (space[j - 3] == 'A') +
                          (space[j - 2] == 'A') +
                          (space[j - 1] == 'A') +
                          (space[j + 1] == 'A') +
                          (space[j + 2] == 'A') +
                          (space[j + 3] == 'A');
            count_2 =     (space[j - 3] == 'B') +
                          (space[j - 2] == 'B') +
                          (space[j - 1] == 'B') +
                          (space[j + 1] == 'B') +
                          (space[j + 2] == 'B') +
                          (space[j + 3] == 'B');
            }else if(j==0){
                count_1=    (space[j + 1] == 'A') +
                            (space[j + 2] == 'A') +
                            (space[j + 3] == 'A');
                count_2=    (space[j + 1] == 'B') +
                            (space[j + 2] == 'B') +
                            (space[j + 3] == 'B');
            }else if(j==1){
                count_1=    (space[j-1]=='A')+
                            (space[j + 1] == 'A') +
                            (space[j + 2] == 'A') +
                            (space[j + 3] == 'A');
                count_2=    (space[j-1]=='B')+
                            (space[j + 1] == 'B') +
                            (space[j + 2] == 'B') +
                            (space[j + 3] == 'B');
            }else if(j==2){
                count_1=    (space[j-2]=='A')+
                            (space[j-1]=='A')+
                            (space[j + 1] == 'A') +
                            (space[j + 2] == 'A') +
                            (space[j + 3] == 'A');
                count_2=    (space[j-2]=='B')+
                            (space[j-1]=='B')+
                            (space[j + 1] == 'B') +
                            (space[j + 2] == 'B') +
                            (space[j + 3] == 'B');
            }else if(j==max-1){
                count_1=    (space[j - 3] == 'A') +
                            (space[j - 2] == 'A') +
                            (space[j - 1] == 'A');
                count_2=    (space[j - 3] == 'B') +
                            (space[j - 2] == 'B') +
                            (space[j - 1] == 'B');
            }else if(j==max-2){
                count_1=(space[j - 3] == 'A') +
                        (space[j - 2] == 'A') +
                        (space[j - 1] == 'A') +
                        (space[j + 1] == 'A');
                count_2=(space[j - 3] == 'B') +
                        (space[j - 2] == 'B') +
                        (space[j - 1] == 'B') +
                        (space[j + 1] == 'B');
            }else if(j==max-3){
                count_1= (space[j - 3] == 'A') +
                         (space[j - 2] == 'A') +
                         (space[j - 1] == 'A') +
                         (space[j + 1] == 'A') +
                         (space[j + 2] == 'A');
                count_2=(space[j - 3] == 'B') +
                        (space[j - 2] == 'B') +
                        (space[j - 1] == 'B') +
                        (space[j + 1] == 'B') +
                        (space[j + 2] == 'B');
            }
            if (count_1 > 0 && count_2 > 0) {
                space_new[j] = '.';
            } else {
                if (space[j] == '.') {
                    space_new[j]='.';
                    if (count_1 >= 2 && count_1 <= 4) {
                        space_new[j] = 'A';
                    }
                    if (count_2 >= 2 && count_2 <= 4) {
                        space_new[j] = 'B';
                    }
                    continue;
                }else if (space[j] == 'A') {
                    space_new[j]='A';
                    if (count_2 > 0 || (count_1 < 2 || count_1 > 4)) {
                        space_new[j] = '.';
                    }
                }else if (space[j] == 'B') {
                    space_new[j]='B';
                    if (count_1 > 0 || (count_2 < 2 || count_2 > 4)) {
                        space_new[j] = '.';
                    }
                }
            }
        }
        //printf("%s\n",space_new);
        strncpy(space,space_new,max);
    }
        printf("%s",space_new);

    return 0;
    }