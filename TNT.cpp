// Ashish Bhambure
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
        cin >> n;
        vector<int> arr(n);
        input(arr);

        // Compute prefix sums
        vector<ll> pSum(n);
        ll s = 0;
        for (int i = 0; i < n; ++i) {
            s += arr[i];
            pSum[i] = s;
        }

        ll ans = 0;

        // Iterate over each valid divisor `x` of `n`
        for (int x = 1; x < n; ++x) {
            if (n % x == 0) {
                ll maxi = LLONG_MIN;
                ll mini = LLONG_MAX;

                for (int i = x - 1; i < n; i += x) {
                    ll subSum = pSum[i];
                    if (i - x >= 0) {
                        subSum -= pSum[i - x];
                    }
                    maxi = max(maxi, subSum);
                    mini = min(mini, subSum);
                }

                ans = max(ans, maxi - mini);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
