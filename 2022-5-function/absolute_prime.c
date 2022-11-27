//
// Created by Gary on 2022/10/29.
//
#include<stdio.h>
#include<math.h>

int is_prime(int x);

int main()
{
    int n,count = 0;
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            int re_i;
            if(i<10){
                re_i=i;
            }else if(i>=10&&i<=99){
                re_i=10*(i%10) + i/10;
            }else if(i>=100&&i<=999){
                re_i=100*(i%10) + 10*(i%100/10) + i/100;
            }else if(i==1000){
                re_i=1;
            }
            if(is_prime(re_i)){
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}

int is_prime(int x)
{
    int flag = 1; // 1 表示该数是素数
    for (int i = 2; i <= sqrt(x + 0.5); i++) {
        if (x % i == 0) {
            flag = 0;
        }
    }
    return flag;
}