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
    string n;
    cin >> n;
    ll x = 0, y = 0;
    if (n != "0")
        while (n.size() > 1)
        {
            x = 0;
            for (ll i = 0; i < n.size(); i++)
            {
                x += (n[i] - '0');
            }
            n = to_string(x);
            y++;
        }
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
