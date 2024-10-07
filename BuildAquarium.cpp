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
    for (ll i = 0; i < sz(arr); ++i) {
        cin >> arr[i];
    }
}

// Function to calculate the water that can be trapped for a given height
int getWaterForHeight(vector<ll>& arr, int height) {
    ll cap = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < height) {
            cap += (height - arr[i]);
        }
    }
    return cap;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        input(arr);

        ll lo = 1;
        ll hi =  2'000'000'007;;  
        ll ans = -1;
        
        while (lo <= hi) {
		long long mid = lo + (hi - lo ) / 2;
		long long tot = 0;
		for (int i = 0; i < n; i++) {
			tot += max(mid - arr[i], 0LL);
		}
		if (tot <= x) { ans = mid;lo = mid+1;} 
		else {hi = mid - 1;}
	}

        cout << ans << endl;
    }

    return 0;
}
