#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin>>n;
    int tmp = n;
    while(tmp--){
        int size;
        cin>>size; 
        v.push_back(size);
    }
    if(n<=1){
        if(v[0]==15) cout<<"DOWN";
        else if(v[0]==0) cout<<"UP";
        else cout<<"-1";
    }
    else{
        if((v[n-1]>v[n-2] && v[n-1]!=15) || (v[n-2]==2 && v[n-1]==1)) cout<<"UP";
        else cout<<"DOWN";
    }
}