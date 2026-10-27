#include<bits/stdc++.h>
using namespace std;
int main(){
    char letter;
    while(cin>>letter){
        if(letter>=65 && letter<=90){
            int n = letter - 64;
            for(int i=1;i<=n;i++){
                for(int j=0;j<n-i;j++){
                    cout<<" ";
                }
                for(int j=0;j<2*i-1;j++){
                    char previous = 65 + j;
                    char latter = 63 + 2 * i - j;
                    cout<<min(previous,latter);
                }
                cout<<endl;
            }
        }
    }
    return 0;
}