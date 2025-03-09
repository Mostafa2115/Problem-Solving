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
    int n, a, b;
    cin >> n;
    vi s;
    int x = 1e9, y = 1, k = 0;
    while (n--)
    {
        cin >> a >> b;
        if (a == 1)
            y = max(y, b);
        else if (a == 2)
            x = min(x, b);
        else if (a == 3)
            s.push_back(b);
    }
    if (y > x)
    {
        cout << "0\n";
        return;
    }
    int t = (x - y + 1);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= y && s[i] <= x)
            t--;
    }

    cout << t << endl;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    cin >> T;
    while (T--)
        El_Solve();
}
