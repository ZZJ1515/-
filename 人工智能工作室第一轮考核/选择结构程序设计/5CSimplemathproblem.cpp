#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long X,Y,Z;
    cin>>X>>Y;
    if(X%Y==0){
        Z = X + Y;
        cout<<Z;
    } 
    else{
        Z = X - Y;
        cout<<Z;
    }
 return 0;
}