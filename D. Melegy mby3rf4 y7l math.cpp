#include <iostream>
using namespace std;
int main()
{
    int n, sum, j, u;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int b[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    bool x = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != b[j][i])
            {
                x = false;
                break;
            }
        }
        if (x == false)
            break;
    }
    if (x)
    {
        cout << "YES\n";
        int sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                sum += a[i][j];
            }
        cout << sum;
    }
    else
        cout << "NO";
    return 0;
}
