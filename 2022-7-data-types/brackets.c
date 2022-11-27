//
// Created by Gary on 2022/11/18.
//
#include<stdio.h>
#include<stdbool.h>
#include <string.h>

#define STACK_SIZE 100001
int top = 0;
char stack[STACK_SIZE]={'\0'};

void push(char ch) {
    top++;
    stack[top] = ch;
}
//从栈顶为1开始
char pop() {
    char ch = stack[top];
    stack[top] = '\0';
    top--;
    return ch;
}

void empty(){
    while(top!=0){
        pop();
    }
}
//清空栈
int main() {
    int t;
    scanf("%d", &t);
    bool result[t];

    for (int i = 0; i < t; i++) {
        char data[STACK_SIZE];
        scanf("%s", data);
        int n = strlen(data);
        bool is_bracket = 1;

        for (int j = 0; j < n; j++) {
            char ch, ch2;
            ch = data[j];
            if (ch == '(' || ch == '[' || ch == '{') {
                push(ch);
            }
                //左括号
            else if ((ch == ')' || ch == ']' || ch == '}') && top != 0) {
                //右括号且栈针不为0（栈不为空）
                ch2 = pop();
                if (ch != ')' || ch2 != '(') {
                    if (ch != ']' || ch2 != '[') {
                        if (ch != '}' || ch2 != '{') {
                            is_bracket = 0;
                            break;
                        }
                    }
                }
                //不能匹配的情况
            } else if ((ch == ')' || ch == ']' || ch == '}') && top == 0) {
                //右括号且栈针为0
                is_bracket = 0;
                break;
            }
                //右括号
            else if (ch != ' ') {
                is_bracket = 0;
                break;
            }
            //其他输入
        }
        if (top != 0) {
            is_bracket = 0;
        }
        result[i]=is_bracket;
        empty();
    }
    for(int i=0;i<t;i++){
        if (result[i]) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}

