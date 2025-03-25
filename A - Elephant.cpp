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
    long x;
    cin >> x;
    int c = 0;
    while (x > 0)
    {
        if (x >= 5)
        {
            x -= 5;
            c++;
        }
        else
        {
            c++;
            x = 0;
        }
    }
    cout << c;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_Solve();
}
