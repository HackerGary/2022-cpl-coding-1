//
// Created by Gary on 2022/11/18.
//
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char input;
    char stack[10001]={'0'};
    int m=0,p=0;
    int op[n];
    int data[n];
    for(int i=0;i<n;i++){
        input=getchar();
        switch(input){
            case 'p':
                input=getchar();
                switch(input){
                    case 'u':
                        op[i]=1;
                        getchar();getchar();getchar();
                        p++;
                        data[p]=getchar();
                        break;
                    case 'o':
                        op[i]=2;
                        break;
                    case 'r':
                        op[i]=4;
                        break;
                }
                while(getchar()!='\n');
                break;
            case 't':
                op[i]=3;
                while(getchar()!='\n');
                break;
        }
    }
    p=1;
    //读入数据
    for(int i=0;i<n;i++){
        switch(op[i]){
            case 1:
                m++;
                stack[m]=data[p];
                p++;
                break;
            case 2:
                if(!m){
                    printf("Empty\n");
                }
                else{
                    stack[m]='0';
                    m--;
                }
                break;
            case 3:
                if(!m){
                    printf("Empty\n");
                }
                else{
                    printf("%c\n",stack[m]);
                }
                break;
            case 4:
                if(!m){
                    printf("Empty\n");
                }
                else{
                    for(int j=m;j>0;j--){
                        printf("| %c |\n",stack[j]);
                    }
                    printf("|===|\n");
                }
                break;
        }
    }

    return 0;
}

