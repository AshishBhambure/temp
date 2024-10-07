//Ashish Bhambure
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

const ll MOD = 1e9 + 7;

void input(vector<int>& arr) {
    for (int i = 0; i < sz(arr); ++i) {
        cin >> arr[i];
    }
}
int main() {
    int t;
    cin >> t;

    while (t--) {
      int n;
      cin>>n;
      long long ans = 0;
      vector<int> v(26,-1);
      string s;
      cin>>s;
      for(int i=0;i<s.size();i++){
        if(v[s[i]-'a'] == -1){
            ans+= n-i;
            v[s[i]-'a']=1;

        }
      }
       cout<<ans<<endl;
    }

    return 0;
}