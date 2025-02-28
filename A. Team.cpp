#include <iostream>
using namespace std;
int main()
{
    int n,a[3],x=0,y=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        for (int i=0;i<3;i++)
        {
            cin >> a[i];
            if (a[i]==1)
               x++;
        }
        if (x>=2)
            y++;
        x=0;
    }
    cout << y;
    return 0;
}
