//
// Created by Gary on 2022/10/29.
//
#include<stdio.h>

int decimal(int m,int n);

int main()
{
    int p,q,r,p_d,q_d,r_d;
    int flag=0;
    scanf("%d%d%d",&p,&q,&r);

    for (int i = 2; i <= 40; i++) {
        p_d = decimal(i, p);
        q_d = decimal(i, q);
        r_d = decimal(i, r);

        if (p_d!=-1&&q_d!=-1&&r_d!=-1&&p_d * q_d == r_d) {
            printf("%d\n", i);
            flag = 1;
            break;
        }
    }
    if(!flag){
        printf("0");
    }

    return 0;
}

int decimal(int m,int n)
{
    int result;
    if(n>=0&&(n/10)<=m-1&&(n%10)<=m-1){
        if(n/10>0){
            result=n%10+n/10*m;
            return result;
        }else{
            result=n%10;
            return result;
        }
    }else{
        return -1;
    }
}