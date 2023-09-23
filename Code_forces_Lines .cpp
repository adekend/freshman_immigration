#https://codeforces.com/contest/1722/problem/D
#Codeforces Problem D (Lines)

#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int t;cin>>t;
    
    while(t--){
         int n;cin>>n;
         string s;cin>>s;
         vector<long long>change(n,0);
         long long val = 0;
         for(int i = 0; i < n;i++){
            int l = i; int r = n-i-1;
            int o = max(l,r);
            int x = 0;
            if(s[i] == 'L') {val += l;x=l;}
            if(s[i] == 'R') {val += r;x=r;}
            change[i] = (long long)o - (long long)x;        
         }
         vector<long long>ans;ans.resize(n);
         sort(change.rbegin(),change.rend());
         ans[0] = change[0] + val;
         for(int i = 1; i <n;i++){
            ans[i] = ans[i - 1] + change[i];
         }
         for(int i = 0; i < n;i++){
            cout<<ans[i]<<" ";
         }
         cout<<'\n';
            }
}
