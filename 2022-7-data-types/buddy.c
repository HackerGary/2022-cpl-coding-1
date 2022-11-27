//
// Created by Gary on 2022/11/25.
//
#include <stdio.h>
#include <math.h>

#define N 100005

int n,q,total,size[N],id[N];

int fit_size(int m){
    //对输入的m求出要分配的内存大小
    if(m==1){
        return 0;
    }
    for(int i=1;i<31;i++){
        if(m>pow(2,i-1) && m<=pow(2,i)){
            return i;
        }
    }
}

void query(){
    printf("%d\n",total);
    for(int i=1;i<=total;i++){
        printf("%d ",id[i]);
    }
    printf("\n");
}

int find_free(int s){
    //寻找当前最合适的节点
    for(int i=1;i<=total;i++){
        if(size[i]==s && id[i]==0){
            return i;
        }
    }
    //有合适的空闲节点
    for(int i=1;i<=total;i++){
        if(size[i]>s && id[i]==0){
            return i;
        }
    }
    //没有合适的空闲节点，返回合适的待分解节点
}

void allocate(int ide,int s){
    while(1){
        //看似死循环，实则在分配空间步骤设立了循环出口
        int i= find_free(s);
        if(size[i]==s){
            id[i]=ide;
            return;
        }
            //有空闲的空闲节点，为之分配空间及id,同时终止该步操作
        else{
            //1...i-1 无事发生
            size[i]-=1;
            //i 单独处理，由于id已为0，故无需更改
            total++;
            for(int k=total;k>i;k--){
                size[k]=size[k-1];
                id[k]=id[k-1];
            }
            //i+1...total 空间及id整体后移
        }
        //返回的是待分解节点，触发分裂操作
    }
}

int main() {
    scanf("%d%d",&n,&q);
    total=1;
    size[1]=n , id[1]=0;
    for(int i=0;i<q;i++){
        char op[3];
        scanf("%s",op);
        if(op[0]=='A'){
            //printf("%s ",op);
            int id,m;
            scanf("%d%d",&id,&m);
            //printf("%d %d\n",id,m);
            allocate(id, fit_size(m));
        }else{
            //printf("%s\n",op);
            query();
        }
    }
    return 0;
}