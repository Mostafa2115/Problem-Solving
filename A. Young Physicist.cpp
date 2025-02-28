#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
#include <cctype>
#define NULL __null
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    int n;
    int sumx = 0, sumy = 0, sumz = 0;
    // cin >> T;
    while (T--)
    {
        cin >> n;
        for (int u = 1; u <= n; u++)
        {
            int a[3];
            for (int i = 0; i < 3; i++)
                cin >> a[i];

            sumx += a[0];
            sumy += a[1];
            sumz += a[2];
        }
        if (sumx == 0 && sumy == 0 && sumz == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
