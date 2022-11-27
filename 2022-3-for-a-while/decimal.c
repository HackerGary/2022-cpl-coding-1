//
// Created by Gary on 2022/10/14.
//
#include<stdio.h>
#include<math.h>
int main() {
    int len, n;
    int result = 0, error=0;
    scanf("%d %d", &len, &n);
    getchar();

    char num[len];
    int num_1[len];
        for (int i = 0; i < len; i++) {
            scanf("%c", &num[i]);
            num_1[i]=num[i];
            if(num_1[i]>='0'&&num_1[i]<='9'){
                num_1[i]-=48;
            }else if(num_1[i]>='A'&&num_1[i]<='F'){
                num_1[i]-=55;
            }
        }
            for(int i = 0;i<len;i++) {
                if (!(num_1[i] >= 0 && num_1[i] < n)) {
                    printf("Error");
                    error = 1;
                    break;
                } else {
                    result += num_1[i] * pow(n, len - i - 1);
                }
            }
        if (error!=1) {
            printf("%d", result);
        }

    return 0;
}