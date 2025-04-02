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
    //  Hey then bye...
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
void El_SOLVE()
{
    string s;
    cin >> s;
    char u;
    bool x = true;
    for(int i=1;i<s.size();i++)
        if(islower(s[i]))
            x = false;
    if(x)
        for(int i = 0; i < s.length(); i++)
        {
            if(islower(s[i]))
                u = toupper(s[i]);
            else
                u = tolower(s[i]);
            cout << u;
        }
    else
        cout << s;
}
int main()
{
    Yalla_beena_IO();
    long T = 1;
    // cin >> T;
    while (T--)
        El_SOLVE();
}
