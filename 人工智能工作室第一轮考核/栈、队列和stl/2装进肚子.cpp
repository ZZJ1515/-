#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,total=0;
    cin>>n>>k;
    int a[n],b[n];
    if(n<=100000 && k<=n){
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<int> diff(n);
        for(int i=0;i<n;i++) total += b[i];
        for(int i=0;i<n;i++) diff[i] = a[i] - b[i];
        sort(diff.begin(),diff.end());
        for(int i=n-1;i>=n-k;i--) total += diff[i];
        cout<<total<<endl;
    }
    else cout<<"error"<<endl;
}