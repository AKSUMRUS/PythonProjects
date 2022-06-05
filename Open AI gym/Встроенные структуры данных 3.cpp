#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m;
    cin >> n;
    vector<int> v1 = vector<int>(n);
    set<int> s1 = set<int>();
    for(int i = 0;i < n;i++){
        cin >> v1[i];
        s1.insert(v1[i]);
    }
    cin >> m;
    vector<int> v2 = vector<int>(m);
    set<int> s2 = set<int>();
    vector<int> ans = vector<int>();
    for(int i = 0;i < m;i++){
        cin >> v2[i];
        s2.insert(v2[i]);
        if(!s1.count(v2[i])){
            ans.push_back(v2[i]);
        }
    }

    for(int i = 0;i < n;i++){
        if(!s2.count(v1[i])){
            ans.push_back(v1[i]);
        }
    }
    sort(ans.begin(),ans.end());

    for(int i = 0;i < ans.size();i++){
        cout << ans[i] << " ";
    }

}
