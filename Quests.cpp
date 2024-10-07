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
    int k;
    cin>>k;

    vector<int> a(n,0);
    vector<int> b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<int> maxi(n,0);
    maxi[0] = b[0];

    for(int i=1;i<n;i++){
         maxi[i] = max(maxi[i-1],b[i]);
        //  cout<<maxi[i]<<" ";
    }

    long long ans = 0;
    
    //
    long long sum = 0;
    for(int i = 0;i<n;i++){
        int questsDone = i+1;
        if(questsDone >k) break;
        sum+= a[i];
        // do repeatedly the maxi 
        
        int rem = k- questsDone;
        if(rem <0 ) break;
        ans = max(ans,sum+maxi[i]*rem);
    }

    cout<<ans<<endl;

    }

    return 0;
}