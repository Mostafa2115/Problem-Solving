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
    int x;
    cin >> x;
    int y = (x % 10) - 1;
    int sum = 0;
    for (int i = 1; i <= ceil(log10(x)); i++)
        sum += i;
    int z;
    if (x > 1)
        z = 10 * y + sum;
    else
        z = 1;
    cout << z << endl;
}
int main()
{
    Yalla_beena_IO;
    long T = 1;
    cin >> T;
    while (T--)
        El_Solve();
}
