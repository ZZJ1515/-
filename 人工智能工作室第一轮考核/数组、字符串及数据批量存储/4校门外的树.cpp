#include <bits/stdc++.h>
using namespace std;
int main(){
    int L,M,cnt=0;
    cin>>L>>M;
    vector<bool> trees(L+1,false);
    for(int i=0;i<M;i++){
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;j++)
            trees[j] = true;
    }
    for(bool flag:trees){
        if(!flag) cnt++; 
    }
    cout<<cnt<<endl;
}