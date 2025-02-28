#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string S;
    cin >> S;
    int x = S.size();
    for (int i = 0; i < x; i++)
    {
        if (S[i] == 'A' || S[i] == 'a' || S[i] == 'U' || S[i] == 'u' || S[i] == 'O' || S[i] == 'o' || S[i] == 'E' || S[i] == 'e' || S[i] == 'I' || S[i] == 'i' || S[i] == 'Y' || S[i] == 'y')
            continue;
        else
            cout << "." << char(tolower(S[i]));
    }
    return 0;
}
