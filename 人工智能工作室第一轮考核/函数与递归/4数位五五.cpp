#include<bits/stdc++.h>
using namespace std;
int isMultiple(int min,int max){
    int cnt = 0;
    for(int i=min;i<=max;i++){
        int cur = i;
        int sum = 0;
        while(cur>0){
            int tmp = cur % 10;
            sum += tmp;
            cur /= 10;
        }
        if(sum%5==0 || sum%10==0) cnt++;
    }
    return cnt;
}
int main(){
    int min,max;
    while(cin>>min>>max){
        if(min>=0 && max<=1000000) cout<<isMultiple(min,max)<<endl;
        else cout<<"error"<<endl;
    }
}