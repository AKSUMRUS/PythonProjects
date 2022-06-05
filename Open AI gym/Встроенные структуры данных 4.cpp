#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,ans=0,cur;
    cin >> n;
    vector<long long> v = vector<long long>(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0;i < n-1;i++){
        if(i == 0){
            ans+=(v[i]+v[i+1]);
            cur = v[i]+v[i+1];
        }
        else{
            ans+=(cur+v[i+1]);
            cur = (cur+v[i+1]);
        }
    }

    cout << ans;
}
