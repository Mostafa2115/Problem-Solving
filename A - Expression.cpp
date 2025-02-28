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
    int a, b, c;
    cin >> a >> b >> c;
    int x = min(a, min(b, c));
    int y = max(a, max(b, c));
    int z = 0;
    int sum = a + b + c;
    int i = sum - (x + y);
    if (x == a)
        a = x;
    else if (x == b)
        b = x;
    else if (x == c)
        c = x;

    if (y == a)
        a = y;
    else if (y == b)
        b = y;
    else if (y == c)
        c = y;

    if (i == a)
        a = i;
    else if (i == b)
        b = i;
    else if (i == c)
        c = i;
    z = (a + b) * c;
    z = max(z, a * b * c);
    z = max(z, a + b + c);
    z = max(z, a * b + c);
    z = max(z, a * (b + c));
    z = max(z, a + b * c);
    cout << z;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_Solve();
}
