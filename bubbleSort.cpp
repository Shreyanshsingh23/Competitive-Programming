#include <bits/stdc++.h>
using namespace std;

//With each iteration biggest element reaches to its correct place

void bubbleSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1-i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> a{3, 6, 9, 10, 7, 2, 12, 1};
    bubbleSort(a);
    for (auto e : a)
    {
        cout << e << ' ';
    }
    cout << endl;
}