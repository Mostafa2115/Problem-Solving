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
    int n;
    cin >> n;
    vi freq(5, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    int x = freq[4];
    int y = min(freq[3], freq[1]);
    x += y;
    freq[3] -= y;
    freq[1] -= y;
    x += freq[3];
    x += freq[2] / 2;
    freq[2] %= 2;
    if (freq[2])
    {
        x++;
        freq[1] -= min(2, freq[1]);
    }
    x += (freq[1] + 3) / 4;

    cout << x;
}
int main() //  4 4 3 3 2 2 1 1
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_Solve();
}
