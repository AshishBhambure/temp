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

void input(vector<ll>& arr) {
    for (int i = 0; i < sz(arr); ++i) {
        cin >> arr[i];
    }
}
int main() {
    int t;
    cin >> t;

    while (t--) {
       ll n;
       cin>>n;
       vector<ll> arr(n,0);
       input(arr);

       vector<ll> brr = arr;
       sort(brr.begin(),brr.end());
       unordered_map<ll,ll> m;
       vector<ll> pSum (n,0);

       ll sum = 0;

       for(ll i=0;i<brr.size();i++){
         sum+=brr[i];
         pSum[i] = brr[i];
       }
      int i = 0;
      int j = 0;
      // while(j<arr.size()){
      //   int killLessThanMe = i;
      //   while(j<arr.size() && j+1 < n  &&( arr[j] == arr[j+1] ||  ))

      // }
       

    }

    return 0;
}