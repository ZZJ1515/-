#include <bits/stdc++.h>
using namespace std;
int a[10],book[10] = {0},n = 8;
void dfs(int step){
    if(step==n){
        for(int i=0;i<n;i++){
            cout<<" "<<a[i];
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(book[i]==0){
            a[step] = i;
            book[i] = 1;
            dfs(step+1);
            book[i]=0;
        }
    }
}
int main(){
    dfs(0);
}