#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt = 1;
    while(cin>>n){
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<setw(4)<<cnt;
                cnt++;
            }
            cout<<endl;
        }
    }
}