#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--)
    {
        char a, b;
        cin >> a >> b;
        int count = INT_MAX;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == a)
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[i] == b)
                    {
                        count = min(count, abs(i - j));
                    }
                }
            }
            if (s[i] == b)
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[i] == a)
                    {
                        count = min(count, abs(i - j));
                    }
                }
            }
        }

        if(count == INT_MAX){
                cout << -1 << endl;
            }
        else{
            cout << count << endl;
        }
    }

    return 0;
}