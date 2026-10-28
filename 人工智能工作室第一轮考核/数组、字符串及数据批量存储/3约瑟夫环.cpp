#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    int s=0;
    for(int i=0;i<n-1;i++){
        s=(s+m)%(i+2);
    }
    cout<<(s+k)%n;
    return 0;
}