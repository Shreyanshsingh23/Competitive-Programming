#include <bits/stdc++.h>
using namespace std;

void Sort(vector<int> &a, int e)
{
    int n = a.size();
    int num = a[e + 1];
    int correctIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= num)
        {
            correctIndex = i;
            break;
        }
    }

    for (int i = e + 1; i > correctIndex; i--)
    {
        swap(a[i], a[i - 1]);
    }
}
int main()
{
    vector<int> a{3, 6, 9, 10, 7, 2, 12, 1};
    Sort(a, 3);
    for (auto e : a)
    {
        cout << e << ' ';
    }
}