#include<bits/stdc++.h>
using namespace std;
int count(int L,int R){
    int cnt = 0;
    for(int i=L;i<=R;i++){
        int tmp = i;
        while(tmp!=0){
        int res = tmp % 10;
        if(res == 2) cnt++;
        tmp /= 10;
        }
    }
    return cnt;
}
int main(){
    int L,R;
    cin>>L>>R;
    cout<<count(L,R)<<endl;
}