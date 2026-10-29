#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long num){
    int cnt = 0;
    long long res = num / 10;
    long long newRes = 0;
    while(res>0){
        int rear = res % 10; 
        newRes = newRes * 10 + rear;
        res /= 10;
        cnt++;
    }
    int newN = num * pow(10,cnt) + newRes;
    for(int i=2;i<=sqrt(newN);i++){
        if(newN%i==0) return false;
    }
    return true;
}
int main(){
    long long n;
    while(cin>>n){
        if(n>9&&n<1000000000){
            if(isPrime(n)) cout<<"prime"<<endl;
            else cout<<"noprime"<<endl;
        }
        else cout<<"error"<<endl;
    }
}