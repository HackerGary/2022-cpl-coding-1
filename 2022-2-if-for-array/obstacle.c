//
// Created by Gary on 2022/10/8.
//
#include<stdio.h>
#include<math.h>
int main()
{
    int XA,YA,XB,YB,XC,YC,min;

    scanf("%d %d %d %d %d %d",&XA,&YA,&XB,&YB,&XC,&YC);

    min = abs(XA-XB) + abs(YA-YB);

    if(XB >= XA && YB >= YA) {
        if ((XC >= XA && XC <= XB) && (YC >= YA && YC <= YB)) {
            if ((XA == XB) && (XB == XC)) {
                printf("%d\nR", min + 2);
                for (int i = YA; i < YB; i++) {
                    printf("U");
                }
                printf("L");
            }
            else if ((YA == YB) && (YB == YC)) {
                printf("%d\nU", min + 2);
                for (int i = XA; i < XB; i++) {
                    printf("R");
                }
                printf("D");
            }
            else if (XC == XB || YC == YA) {
                printf("%d\n", min);
                for (int i = YA; i < YB; i++) {
                    printf("U");
                }
                for (int i = XA; i < XB; i++) {
                    printf("R");
                }
            } else {
                printf("%d\n", min);
                for (int i = XA; i < XB; i++) {
                    printf("R");
                }
                for (int i = YA; i < YB; i++) {
                    printf("U");
                }
            }
        }else{
            printf("%d\n",min);
            for(int i = XA;i < XB;i++){
                printf("R");
            }
            for(int i = YA;i < YB;i++){
                printf("U");
            }
        }
    }
    else if(XB <= XA && YB <= YA){
        if((XC <= XA && XC >=XB) && (YC <= YA && YC >= YB)){
            if((XA == XB) && (XB == XC)){
                printf("%d\nL",min+2);
                for(int i = YB;i < YA;i++){
                    printf("D");
                }
                printf("R");
            }
            else if((YA == YB) && (YB == YC)){
                printf("%d\nU",min+2);
                for(int i = XB;i < XA;i++){
                    printf("L");
                }
                printf("D");
            }
            else if(XC == XB || YC == YA){
                printf("%d\n",min);
                for(int i = YB;i < YA;i++){
                    printf("D");
                }
                for(int i = XB;i < XA;i++){
                    printf("L");
                }
            }else{
                printf("%d\n",min);
                for(int i = XB;i < XA;i++){
                    printf("L");
                }
                for(int i = YB;i < YA;i++){
                    printf("D");
                }
            }

        }else{
            printf("%d\n",min);
            for(int i = XB;i < XA;i++){
                printf("L");
            }
            for(int i = YB;i < YA;i++){
                printf("D");
            }
        }
    }else if(XB < XA && YB > YA) {
        if ((XC != XB) && (YC != YA)) {
            printf("%d\n", min);
            for (int i = XB; i < XA; i++) {
                printf("L");
            }
            for (int i = YA; i < YB; i++) {
                printf("U");
            }
        }
        else{
            printf("%d\n", min);
            for (int i = YA; i < YB; i++) {
                printf("U");
            }
            for (int i = XB; i < XA; i++) {
                printf("L");
            }
        }
    }else if(XB > XA && YB < YA){
        if((XC != XB) && (YC != YA)) {
            printf("%d\n", min);
            for (int i = XA; i < XB; i++) {
                printf("R");
            }
            for (int i = YB; i < YA; i++) {
                printf("D");
            }
        }else{
            printf("%d\n", min);
            for (int i = YB; i < YA; i++) {
                printf("D");
            }
            for (int i = XA; i < XB; i++) {
                printf("R");
            }
        }
    }


}