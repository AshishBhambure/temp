#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{   
    ios;
    #ifndef ONLINE_JUDGE
    // freopen("input1.txt", "r", stdin);
    // freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--) {
        ll n,b,sum=0,maxi = INT_MIN,par=0;
        cin>>n;
        cin>>b;
        sum = b;
        par = abs(b)%2;
        maxi = sum;
        for( ll i = 1 ; i < n ; i++) {
            cin>>b;
            if(abs(b)%2 != par) {
                sum+=b;
            }
            else {
                sum = b;
            }

            if(b > sum) {
                sum = b;
            }
            par = abs(b)%2;
            maxi = max(sum,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;     
 }