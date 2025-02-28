#include <iostream>
using namespace std;
int main()
{
    int n, x;
    string letter;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> letter;
        x = size(letter);
        if ((x - 1) < 10)
        {
            cout << letter << endl;
        }
        else
            cout << letter[0] << (x - 2) << letter[x - 1] << endl;
    }
    return 0;
}
