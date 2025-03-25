//                               <-: .... << Hey then bye >> .... :->
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
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}
void El_SOLVE()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l == r && r == d && d == u)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    cin >> T;
    while (T--)
        El_SOLVE();
}
