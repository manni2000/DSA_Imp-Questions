
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> count;
    int T, n, k;
    cin >> T;
    for (int test = 1; test <= T; ++test)
    {
        cout << "Case #" << test << ":";
        cin >> n >> k;
        bool flag = true;
        count.clear();
        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            if (count[s] == 0)
                count[s] = 1;
            else
                count[s] = count[s] + 1;
        }
        for (map<int, int>::iterator iter = count.begin(); iter != count.end(); ++iter)
        {
            if (iter->second >= 3)
            {
                flag = false;
                break;
            }
        }

        bool haveOdd = false;
        for (map<int, int>::iterator iter = count.begin(); iter != count.end(); ++iter)
        {
            if (iter->second == 1)
            {
                haveOdd = true;
                break;
            }
        }

        if (k * 2 < n || flag == false || haveOdd == false)
        {
            cout << " NO\n";
        }
        else
        {
            cout << " YES\n";
        }
    }
    return 0;
}