//
// Created by Gary on 2022/10/22.
//
#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char space[1001]="\0";
    scanf("%s",&space);
    printf("%s\n",space);
    //检验是否正确读入字符串

    int max;
    max = strlen(space);
    printf("%d", max);
    //检验字符串的长度是否正确

    for (int i = 0; i < n; i++){
        //控制模拟轮数
        for (int j = 0; j < max; j++) {
            if (j >= 3 && j <= max - 4) {
                if(space[j]=='A'){
                    int count_1=0;
                    int death=0;
                    count_1=(space[j-3]=='A')+
                            (space[j-2]=='A')+
                            (space[j-1]=='A')+
                            (space[j+1]=='A')+
                            (space[j+2]=='A')+
                            (space[j+3]=='A');
                    if (space[j - 3] == 'B' || space[j - 2] == 'B' || space[j - 1] == 'B' ||
                        space[j + 1] == 'B' || space[j + 2] == 'B' || space[j + 3] == 'B') {
                        death = 1;
                    }
                    if(!(count_1>=2&&count_1<=4)){
                        death=1;
                    }
                    if(death){
                        space[j]='.';
                    }
                }else if(space[j]=='B'){
                    int count_2=0;
                    int death=0;
                    count_2=(space[j-3]=='B')+
                            (space[j-2]=='B')+
                            (space[j-1]=='B')+
                            (space[j+1]=='B')+
                            (space[j+2]=='B')+
                            (space[j+3]=='B');
                    if (space[j - 3] == 'A' || space[j - 2] == 'A' || space[j - 1] == 'A' ||
                        space[j + 1] == 'A' || space[j + 2] == 'A' || space[j + 3] == 'A') {
                        death = 1;
                    }
                    if (!(count_2 >= 2 && count_2 <= 4)) {
                        death = 1;
                    }
                        if (death) {
                            space[j] = '.';
                        }

                }else if(space[j]=='.'){
                    int count_1=0,count_2=0;
                    count_1=(space[j-3]=='A')+
                            (space[j-2]=='A')+
                            (space[j-1]=='A')+
                            (space[j+1]=='A')+
                            (space[j+2]=='A')+
                            (space[j+3]=='A');
                    count_2=(space[j-3]=='B')+
                            (space[j-2]=='B')+
                            (space[j-1]=='B')+
                            (space[j+1]=='B')+
                            (space[j+2]=='B')+
                            (space[j+3]=='B');
                    if(!(count_1>0&&count_2>0)){
                        if(count_1>=2&&count_1<=4){
                            space[j]='A';
                        }
                        if(count_2 >= 2 && count_2 <= 4){
                            space[j]='B';
                        }
                    }

                }

            }else if(j==0){
                if(space[j]=='A'){
                    int count_1=0;
                    count_1=(space[j+1]=='A')+
                            (space[j+2]=='A')+
                            (space[j+3]=='A');
                    if()
                }
            }
        }


    }
    return 0;
}