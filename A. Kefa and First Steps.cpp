//                                       <-: .... << Hey then bye >> .... :->
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<ll>
#define pll pair<long, long>
#define PI 3.141592653589793238462
#define MOD 1000000007
using namespace std;
void Yalla_beena_IO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}
void El_Solve()
{
    long n;
    cin >> n;
    vll a(n);
    for (long i = 0; i < n; i++)
        cin >> a[i];
    ll x = 1, y = 1;
    for (long i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            x++;
        else
        {
            y = max(x, y);
            x = 1;
        }
    }
    y = max(y, x);
    cout << y;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_Solve();
}
