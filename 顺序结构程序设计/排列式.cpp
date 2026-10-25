#include<bits/stdc++.h>
using namespace std;
int check(int a,int b,int c){
    int count[10]={0};
    while(a>0){count[a%10]++;a/=10;}
    while(b>0){count[b%10]++;b/=10;}
    while(c>0){count[c%10]++;c/=10;}
    for(int i=1;i<10;i++){
        if(count[i]!=1){return 0;}
    }
    return count[0]==0;
}
typedef struct{
    int a,b,c;
}Eq;

int main(){
    Eq eq[100];
    int cnt=0;
    for(int a=1;a<10;a++){
        for(int b=1000;b<10000;b++){
            int c=a*b;
            if(c<1000 || c>10000){continue;}
            if(check(a,b,c)){
                eq[cnt].a=a;
                eq[cnt].b=b;
                eq[cnt].c=c;
                cnt++;
            }
        }
    }
    for(int a=10;a<100;a++){
        for(int b=100;b<1000;b++){
            int c=a*b;
            if(c<1000 || c>10000){continue;}
            if(check(a,b,c)){
                eq[cnt].a=a;
                eq[cnt].b=b;
                eq[cnt].c=c;
                cnt++;
            }
        }
    }
    //softing
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - 1 - i; j++) {
            if (eq[j].c > eq[j+1].c || (eq[j].c == eq[j+1].c && eq[j].a > eq[j+1].a)) {
                Eq temp = eq[j];
                eq[j] = eq[j+1];
                eq[j+1] = temp;
            }
        }
    }
    // outputing
    for (int i = 0; i < cnt; i++) {
        printf("%d = %d x %d\n", eq[i].c, eq[i].a, eq[i].b);
    }
    return 0;
}