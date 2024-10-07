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
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        vector<int> queries(q);
        input(arr);
        input(queries);

        set<int> st;

        for (int i = 0; i < q; i++) {
            if (st.find(queries[i]) == st.end()) {  
                st.insert(queries[i]);

                for (int a = 0; a < n; a++) {
                    if (arr[a] % (1 << queries[i]) == 0) {
                        arr[a] += 1 << (queries[i] - 1);
                    }
                }
            }
        }

        for (auto i : arr) cout << i << " ";
        cout << endl;
    }

    return 0;
}
