#include <iostream>
#include <vector>
#include <map>
using namespace std;

int sockMerchant(int n, vector<int> arr)
{
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int pairs = 0;

    for (auto x : freq)
    {
        pairs += x.second / 2;
    }

    return pairs;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int color;
        cin >> color;
        arr.push_back(color);
    }

    cout << sockMerchant(n, arr);

    return 0;
}