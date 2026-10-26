#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int tmp = 1;
    while(cin>>n){
        for(int i=0;i<n;i++){ 
            int cnt = 0;
            for(int j=tmp;j<=tmp+i;j++){
                cout<<" "<<j;
                cnt++;
            }
            cout<<endl;
            tmp += cnt;
        }
    }
}