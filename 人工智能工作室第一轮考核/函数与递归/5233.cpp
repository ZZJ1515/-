#include<bits/stdc++.h>
using namespace std;
bool isFit(string m,string n){
    if(m[0]=='2' && n[0]=='2'){
        for(int i=1;i<m.size();i++){
            if(m[i]!='3') return false;
        } 
         for(int j=1;j<n.size();j++){
            if(n[j]!='3') return false;
        } 
    }
    else return false;
    return true;
}
string multi(string m,string n){
    reverse(m.begin(),m.end());
    reverse(n.begin(),n.end());
    vector<int> res(m.size()+n.size(),0);
    for(int i=0;i<m.size();i++){
        for(int j=0;j<n.size();j++){
            res[i+j] += (m[i]-'0') * (n[j]-'0');
        }
    }
    int carry = 0;
    for(int i=0;i<res.size();i++){
        res[i] = res[i] + carry;
        carry = res[i] / 10;
        res[i] %= 10;
    }
    string ans;
    int index = res.size() - 1;
    while(index>=0 && res[index]==0) index--;
    if(index<0) return "0";
    for(int i=index;i>=0;i--){
        ans += res[i] + '0';
    }
    return ans;
}
int main(){
    int T;
    cin>>T;
    if(T>=2 && T<=1500){
        while(T--){
        string m,n;
        cin>>m>>n;
        if(m.size()>=3 && m.size()<=50 && n.size()>=3 && n.size()<=50 && isFit(m,n)) cout<<multi(m,n)<<endl;
        else cout<<"error"<<endl;
        }
    }
    else cout<<"error"<<endl;
}