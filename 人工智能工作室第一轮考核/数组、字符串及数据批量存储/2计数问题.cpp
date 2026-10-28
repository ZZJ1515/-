#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    int cnt = 0;
    int a[1000005];
    cin>>n>>x;
    for(int i=0;i<n;i++){
        a[i] = i + 1;
        int tmp = a[i];
        while(tmp>0){
            int last = tmp % 10;
            if(last==x) cnt++;
            tmp /= 10;
        }
    }
    cout<<cnt<<endl;
}