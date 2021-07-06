#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool arr[10] = {false};
    int r;

    while (n > 0)
    {
        r = n % 10;
        if (arr[r])
        {
            break;
        }
        arr[r] = true;
        n = n / 10;
    }

    if (n == 0)
        cout << "YEs";
    else
        cout << "no";
    return 0;
}