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
    string s;
    cin >> s;
    int x = 1, y = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
            y = max(y, x);
        }
        else
        {
            x = 1;
        }
    }
    if (y >= 7)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_SOLVE();
}
