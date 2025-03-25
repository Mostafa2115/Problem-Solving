#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<ll>
#define pll pair<ll, ll>
#define qi queue<int>
#define qll queue<ll>
#define PI 3.141592653589793238462
#define MOD 1000000007
using namespace std;
void Yalla_beena_IO()
{
    //  Hey then bye ...
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}
void El_SOLVE()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll x = n * m;
    ll y = 0;
    if ((a * a) > (n * m))
    {
        cout << 1;
        return;
    }
    
    y = (n + a - 1) / a;
    x = (m + a - 1) / a;
    cout << x * y;
    
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_SOLVE();
}
