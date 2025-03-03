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
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n / 2);
    else
        cout << -(n + 1) / 2;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_Solve();
}
