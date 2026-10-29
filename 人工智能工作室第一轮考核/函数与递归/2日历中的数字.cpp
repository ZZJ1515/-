#include<bits/stdc++.h>
using namespace std;
int statistic(int year,int month,int num){
    int cnt1 = 0,cnt2 = 0,total = 0,day=0;
    int tmp1 = year;
    while(tmp1>0){
        int res1 = tmp1 % 10;
        if(res1==num) cnt1++;
        tmp1 /= 10;
    }
    if(month%10==num) cnt1++;
    if(month/10==num) cnt1++;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==2) day = 31;
    else if (month==4 || month==6 || month==9 || month==11) day = 30;
    else day = ((year%4==0 && year%100!=0) || year%400==0) ? 29 : 28;
    for(int i=1;i<=day;i++){
        if(i%10==num) cnt2++;
        if(i/10==num) cnt2++;
    }
    total = cnt1 * day + cnt2;
    return total;
}
int main(){
    int y,m,n;
    while(cin>>y>>m>>n){
        if(y>=2000&&y<=3000&&m>=1&&m<=12&&n>=0&&n<=9) cout<<statistic(y,m,n)<<endl;
        else cout<<"error"<<endl;
    }
}