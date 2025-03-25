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
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    reverse(a.begin(), a.end());
    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        a[i + 1] = a[i + 1] + a[i];
        a[i + 1]--;
        sum = a[i + 1];
    }
    cout << sum << endl;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    cin >> T;
    while (T--)
        El_SOLVE();
}
