#include<bits/stdc++.h>
using namespace std;
int main(){
    int sheets;
    cin>>sheets;
    while(sheets--){
        int n;
        long long sum = 0;
        double variance = 0;
        double max_val = -1e9;
        double min_val = 1e9;
        cin>>n;
        long long a[100005];       
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
            if(a[i]>=max_val) max_val = a[i];
            if(a[i]<=min_val) min_val = a[i];
        }
        long long range = max_val - min_val;
        double average = (double)sum / n;
        for(int i=0;i<n;i++)
            variance += pow(a[i]-average,2);
        cout<<range<<" "<<fixed<<setprecision(3)<<variance/n<<endl;
    }
}