#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int start = INT_MIN;
        int end = INT_MAX;
        unordered_map<int, bool>mp;
        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;
            if(a == 1){
                start = max(start, b);
            }
            if(a == 2){
                end = min(end, b);
            }
            if(a == 3){
                mp[b] = true;
            }
        }
        int count = 0;
        int remove = 0;
        for(auto &x:mp){
            if(x.first >= start && x.first <=end){
                remove++;
            }
        }
        count = end - start - remove + 1;
        if(count>=0){
            cout << count << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}